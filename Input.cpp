//
// Created by МожаевАН on 06.03.2019.
//

#include "Input.h"

//Input parsing function
int Input(float & a, float & b)
{
    std::string FirstArgument;
    std::string SecondArgument;
    char sign = 0;
    //Available mods: 0 - nothing, 1 - addition, 2 - subtraction,
    //3 - multiplication, 4 - division, 5 - exit
    int mode = 0;

    //+++ Parsing first argument +++\\

    std::cin >> FirstArgument;

    if(FirstArgument == "help")         //Processing help
    {
        Help();
        mode = 0;
        return mode;
    }
    else if(FirstArgument == "exit")    //Processing exit
    {
        mode = 5;
        return mode;
    }
    else
    {
        try
        {
            a = std::stof(FirstArgument, 0);
        }
        catch(...)
        {
            std::cout << "Wrong first argument bro" << std::endl << std::endl;
            mode = 0;
            return mode;
        }
    }

    //+++ Parsing sign +++\\

    std::cin >> sign;

    //Mode selection
    if(sign == '+')         mode = 1;
    else if(sign == '-')    mode = 2;
    else if(sign == '*')    mode = 3;
    else if(sign == '/')    mode = 4;
    else
    {
        std::cout << "Wrong sign bro" << std::endl << std::endl;
        mode = 0;
        return mode;
    }

    //+++ Parsing second argument +++\\

    std::cin >> SecondArgument;

    try
    {
        b = std::stof(SecondArgument, 0);
    }
    catch(...)
    {
        std::cout << "Wrong second argument bro" << std::endl << std::endl;
        mode = 0;
        return mode;
    }

    return mode;
}