//
// Created by МожаевАН on 07.03.2019.
//

#include <iostream>
#include "Action.h"
#include "Calculator.h"

void Action(int mode, float a, float b)
{
    Calculator Calculator(a, b);

    try
    {
        switch (mode)
        {
            case 1:
                Calculator.Addition();
                break;
            case 2:
                Calculator.Subtraction();
                break;
            case 3:
                Calculator.Multiplication();
                break;
            case 4:
                Calculator.Division();
                break;
        }

        std::cout << "Congratulations, the answer is: " << Calculator.GetAnswer() << std::endl << std::endl;
    }
    catch (...)
    {
        std::cout << "Congratulations, you have reached INFINITE POWER!" << std::endl << std::endl;
    }
}