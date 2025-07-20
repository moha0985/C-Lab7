#include "TwoD_NumberRange.h"
#include <iostream>

using namespace std;

namespace CST8219 {

    TwoD_NumberRange::TwoD_NumberRange(int xMin, int xMax, int yMinVal, int yMaxVal)
        : NumberRange(xMin, xMax), yMin(yMinVal), yMax(yMaxVal) {
        cout << "Constructed TwoD_NumberRange with x: [" << xMin << "," << xMax
             << "] and y: [" << yMin << "," << yMax << "]" << endl;
    }

    TwoD_NumberRange::~TwoD_NumberRange() {
        cout << "In the destructor for TwoD_NumberRange" << endl;
    }

    int TwoD_NumberRange::getMagnitude() {
        cout << "Calling virtual function getMagnitude()" << endl;
        return (max - min) * (yMax - yMin);
    }

    bool TwoD_NumberRange::operator[](int arr[]) const {
        return (arr[0] >= min && arr[0] <= max) &&
               (arr[1] >= yMin && arr[1] <= yMax);
    }

    TwoD_NumberRange& TwoD_NumberRange::operator++() {
        NumberRange::operator++(); // increment x dimension
        ++yMax;                    // increment y dimension
        return *this;
    }

    TwoD_NumberRange& TwoD_NumberRange::operator--() {
        NumberRange::operator--(); // decrement x
        --yMax;                    // decrement y
        return *this;
    }

}