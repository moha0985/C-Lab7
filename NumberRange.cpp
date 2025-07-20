// CST8219 Lab 5
// Student Name: Wajan Mohamed
// Student Number: 040823281

#include "NumberRange.h"
#include <iostream>

using namespace std;

namespace CST8219 {

    // Default constructor chaining
    NumberRange::NumberRange() : NumberRange(1) {
        cout << "In constructor with 0 parameters" << endl;
    }

    NumberRange::NumberRange(int _max) : NumberRange(0, _max) {
        cout << "In constructor with 1 parameter, max = " << _max << endl;
    }

    NumberRange::NumberRange(int _min, int _max) {
        min = _min;
        max = _max;
        cout << "Created NumberRange with min = " << min << ", max = " << max << endl;
    }

    NumberRange::~NumberRange() {
        cout << "In the destructor for NumberRange" << endl;
    }

    // Copy constructors
    NumberRange::NumberRange(NumberRange& copy) : NumberRange(copy.min, copy.max) {
        cout << "Copy constructor by reference called\n";
    }

    NumberRange::NumberRange(NumberRange* copy) : NumberRange(*copy) {
        cout << "Copy constructor by pointer called\n";
    }

    int NumberRange::getMin() const { return min; }
    int NumberRange::getMax() const { return max; }
    void NumberRange::setMin(int _min) { min = _min; }
    void NumberRange::setMax(int _max) { max = _max; }

    void NumberRange::printRange() {
        cout << "Range: [" << min << ", " << max << "]" << endl;
    }
    // Assignment operator
    NumberRange& NumberRange::operator=(const NumberRange& Other) {
        if (this != &Other) {
            min = Other.min;
            max = Other.max;
        }
        return *this;
    }

    // Equality operator
    bool NumberRange::operator==(const NumberRange& Other) const {
        return min == Other.min && max == Other.max;
    }

    // Inequality operator
    bool NumberRange::operator!=(const NumberRange& Other) const {
        return !(*this == Other);
    }

    // Subscript operator with int array
    bool NumberRange::operator[](int arr[]) const {
        return arr[0] >= min && arr[0] <= max;
    }

    // Prefix increment
    NumberRange& NumberRange::operator++() {
        ++max;
        return *this;
    }

    // Postfix increment
    NumberRange NumberRange::operator++(int) {
        NumberRange temp = *this;
        ++max;
        return temp;
    }

    // Prefix decrement
    NumberRange& NumberRange::operator--() {
        --max;
        return *this;
    }

    // Postfix decrement
    NumberRange NumberRange::operator--(int) {
        NumberRange temp = *this;
        --max;
        return temp;
    }

    // Output stream operator
    ostream& operator<<(ostream& os, const NumberRange& n) {
        os << "Range: [" << n.min << ", " << n.max << "]";
        return os;
    }

    // Virtual getMagnitude
    int NumberRange::getMagnitude() {
        std::cout << "Calling virtual function getMagnitude()" << std::endl;
        return max - min;
    }


} // namespace CST8219

