//
// Created by МожаевАН on 06.03.2019.
//

#include <iostream>
#include "Input.h"
#include "Help.h"

int Input()
{
    std::string FirstArgument;
    std::string SecondArgument;
    float a = 0;
    float b = 0;
    char sign = 0;
    int mode = 0;

    std::cin >> FirstArgument;

    if(FirstArgument == "help")
        Help();
    else if(FirstArgument == "exit")
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
            std::cout << "Wrong first argument bro" << std::endl;
            mode = 0;
            return mode;
        }
    }

    std::cin >> sign;

    if(sign == '+')         mode = 1;
    else if(sign == '-')    mode = 2;
    else if(sign == '*')    mode = 3;
    else if(sign == '/')    mode = 4;
    else
    {
        std::cout << "Wrong sign bro" << std::endl;
        mode = 0;
        return mode;
    }

    std::cin >> SecondArgument;

    try
    {
        b = std::stof(SecondArgument, 0);
    }
    catch(...)
    {
        std::cout << "Wrong second argument bro" << std::endl;
        mode = 0;
        return mode;
    }

    return mode;
}