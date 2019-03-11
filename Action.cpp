//
// Created by МожаевАН on 07.03.2019.
//

#include "Action.h"

//Function where actual calculation going
void Action(int mode, float a, float b)
{
    //Making new object
    Calculator Calculator(a, b);

    try
    {
        //The choice of action depending on the mod
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
    //Processing division by zero
    catch (std::logic_error)
    {
        std::cout << "Congratulations, you have reached INFINITE POWER!" << std::endl << std::endl;
    }
}