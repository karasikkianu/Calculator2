//
// Created by МожаевАН on 04.03.2019.
//

#include <stdexcept>
#include "Calculator.h"

float Calculator::GetA()
{
    return a;
}

float Calculator::GetB()
{
    return b;
}

double Calculator::GetAnswer()
{
    return answer;
}

void Calculator::Addition()
{
    answer = a + b;
}

void Calculator::Subtraction()
{
    answer = a - b;
}

void Calculator::Multiplication()
{
    answer = a * b;
}

void Calculator::Division()
{
    answer = a / b;

    if(b == 0)
        throw std::logic_error("DivisionByZero");
}