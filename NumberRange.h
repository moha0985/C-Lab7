// CST8219 Lab 5
// Student Name: Wajan Mohamed
// Student Number: 040823281

#pragma once
#ifndef NUMBERRANGE_H
#define NUMBERRANGE_H

#include <iostream>

namespace CST8219 {

    class NumberRange {

    protected:
        int min, max;

    public:
        NumberRange();                   // Default constructor (min = 0, max = 1)
        NumberRange(int);            // Single value constructor
        NumberRange(int, int);   // Full range constructor
        virtual ~NumberRange();          // Virtual destructor

        // Copy constructors
        NumberRange(NumberRange&);
        NumberRange(NumberRange*);

        // Getters & Setters
        int getMin() const;
        int getMax() const;
        void setMin(int);
        void setMax(int);

        void printRange(void);

        //Operators overloads
        virtual NumberRange& operator=(const NumberRange&);     // Copies contents of another NumberRange into this one
        virtual bool operator==(const NumberRange&) const;      // Comparison == equal
        virtual bool operator!=(const NumberRange&) const;      // Comparsion != doesn't equal

        virtual bool operator[](int arr[]) const;               // Checks if i lies within the range

        virtual NumberRange& operator++();       // prefix ++ for max
        virtual NumberRange operator++(int);     // postfix ++ for max
        virtual NumberRange& operator--();       // prefix -- for max
        virtual NumberRange operator--(int);     // postfix -- for max

        // Virtual getMagnitude function
        virtual int getMagnitude();

        // Friend output stream operator
        friend std::ostream& operator<<(std::ostream& os, const NumberRange& n);
    };
}

#endif // NUMBERRANGE_H