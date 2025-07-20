// CST8219 Lab 6
// Student Name: Wajan Mohamed
// Student Number: 040823281

#include <iostream>
#include "NumberRange.h"
#include "TwoD_NumberRange.h"
#include "ThreeD_NumberRange.h"

using namespace std;
using namespace CST8219;

NumberRange* testRange(NumberRange *pRange, int testPoint[]) {
    cout << typeid(*pRange).name() << "'s magnitude is: " << pRange->getMagnitude() << endl;
    cout << "Is point in range: " << (*pRange)[testPoint] << endl;
    return pRange;
}


int main(int argc, char **argv)
    {
        int pt1[] = { 4 };
        delete  testRange( new NumberRange(1, 6), pt1);
        delete  testRange( new NumberRange(10, 60), pt1);

        int pt2[] = { 4, 5 };
        delete  testRange( new TwoD_NumberRange(2, 6, 1, 23), pt2);
        delete  testRange( new TwoD_NumberRange(2, 6, 6, 23), pt2);


        int pt3 [] = { 3, 3, 3 };
        delete  testRange( new ThreeD_NumberRange(2, 5, 1, 8, 2, 9), pt3);
        delete  testRange( new ThreeD_NumberRange(4, 6, 1, 8, 2, 9), pt3);

    delete testRange(dynamic_cast<TwoD_NumberRange*>(new ThreeD_NumberRange(4, 6, 1, 8, 2, 9)), pt2);
    delete testRange(dynamic_cast<NumberRange*>(new ThreeD_NumberRange(4, 6, 1, 8, 2, 9)), pt1);

        return 0;

    }


