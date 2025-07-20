// CST8219 Lab 6
// Student Name: Wajan Mohamed
// Student Number: 040823281

#ifndef THREED_NUMBERRANGE_H
#define THREED_NUMBERRANGE_H

#include "TwoD_NumberRange.h"
#include "NumberRange.h"

namespace CST8219 {

    class ThreeD_NumberRange : public TwoD_NumberRange {

    public:
        ThreeD_NumberRange(int xMin, int xMax, int yMin, int yMax, int zMin, int zMax);
        ThreeD_NumberRange(const ThreeD_NumberRange& other);

        ~ThreeD_NumberRange() override;

        int getMagnitude() override;
        bool operator[](int[]) const override;
        ThreeD_NumberRange& operator++() override;
        ThreeD_NumberRange& operator--() override;
    };

} // namespace CST8219

#endif // THREED_NUMBERRANGE_H
