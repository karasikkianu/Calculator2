#include <iostream>

#include "Input.h"

int main()
{
    int mode = 0;

    std::cout << "Hi there!" << std::endl;

    while(mode != 5)
    {
        std::cout << "Lets start calculating!" << std::endl;
        std::cout << "Type 'help' if you need some help" << std::endl;
        std::cout << "Type 'exit' if you want to close this program" << std::endl;

        mode = Input();
    }

    return 0;
}