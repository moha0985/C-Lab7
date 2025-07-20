// CST8219 Lab 6
// Student Name: Wajan Mohamed
// Student Number: 040823281

#ifndef TWOD_NUMBERRANGE_H
#define TWOD_NUMBERRANGE_H

#include "NumberRange.h"

namespace CST8219 {

    class TwoD_NumberRange : public virtual NumberRange {
    protected:
        int yMin, yMax; // y_Range (min & max values)

    public:
        TwoD_NumberRange(int xMin, int xMax, int yMin, int yMax);
        ~TwoD_NumberRange() override;

        int getMagnitude() override;
        bool operator[](int[]) const override;
        TwoD_NumberRange& operator++() override;
        TwoD_NumberRange& operator--() override;
    };
} // namespace CST8219

#endif // TWOD_NUMBERRANGE_H
