//
// Created by МожаевАН on 04.03.2019.
//

#ifndef CALCULATOR2_CALCULATOR_H
#define CALCULATOR2_CALCULATOR_H


class Calculator
{
public:
    Calculator(float a, float b) : a(a), b(b)
    {}

    void Addition();
    void Subtraction();
    void Multiplication();
    void Division();

    float GetA();
    float GetB();
    double GetAnswer();

private:


    float a;
    float b;
    double answer;
};


#endif //CALCULATOR2_CALCULATOR_H
