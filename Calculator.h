//
// Created by МожаевАН on 04.03.2019.
//

#ifndef CALCULATOR2_CALCULATOR_H
#define CALCULATOR2_CALCULATOR_H

#include <stdexcept>

class Calculator
{
public:
    //Constructor
    Calculator(float a, float b) : a(a), b(b)
    {}

    //Public functions
    void Addition();
    void Subtraction();
    void Multiplication();
    void Division();

    //Public interface
    float GetA();
    float GetB();
    double GetAnswer();

private:

    //Private variables
    float a;
    float b;
    double answer;
};


#endif //CALCULATOR2_CALCULATOR_H
