#include "ThreeD_NumberRange.h"
#include <iostream>

using namespace std;

namespace CST8219 {


    ThreeD_NumberRange::ThreeD_NumberRange(int xMin, int xMax, int yMinVal, int yMaxVal, int zMinVal, int zMaxVal)
       : NumberRange(zMinVal, zMaxVal), // initialize the virtual base for z
         TwoD_NumberRange(xMin, xMax, yMinVal, yMaxVal) {
        cout << "Constructed ThreeD_NumberRange with x: [" << xMin << "," << xMax
             << "], y: [" << yMinVal << "," << yMaxVal << "], z: [" << zMinVal << "," << zMaxVal << "]" << endl;
    }


    // Explicit copy constructor to support copying with virtual inheritance
    ThreeD_NumberRange::ThreeD_NumberRange(const ThreeD_NumberRange& other)
        : NumberRange(other.min, other.max), // zMin/zMax via virtual base
          TwoD_NumberRange(other.min, other.max, other.yMin, other.yMax) {
        std::cout << "Copy constructor for ThreeD_NumberRange called" << std::endl;
    }

    ThreeD_NumberRange::~ThreeD_NumberRange() {
        cout << "In the destructor for ThreeD_NumberRange" << endl;
    }

    int ThreeD_NumberRange::getMagnitude() {
        cout << "Calling virtual function getMagnitude() [ThreeD_NumberRange]" << endl;
        // Volume = (xMax-xMin) * (yMax-yMin) * (zMax-zMin)
        return TwoD_NumberRange::getMagnitude() * (max - min);
    }

    bool ThreeD_NumberRange::operator[](int arr[]) const {
        // arr[0]: x, arr[1]: y, arr[2]: z
        return (arr[0] >= min && arr[0] <= max) &&
               (arr[1] >= yMin && arr[1] <= yMax) &&
               (arr[2] >= min && arr[2] <= max); // zMin/zMax from virtual base
    }

    ThreeD_NumberRange& ThreeD_NumberRange::operator++() {
        TwoD_NumberRange::operator++();
        NumberRange::operator++();
        return *this;
    }

    ThreeD_NumberRange& ThreeD_NumberRange::operator--() {
        TwoD_NumberRange::operator--();
        NumberRange::operator--();
        return *this;
    }


}

