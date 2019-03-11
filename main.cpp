#include <iostream>
#include "Action.h"
#include "Input.h"

int main()
{
    int mode = 0;
    //Available mods: 0 - nothing, 1 - addition, 2 - subtraction,
    //3 - multiplication, 4 - division, 5 - exit
    float a = 0;
    float b = 0;

    std::cout << "Hi there!" << std::endl;
    std::cout << "Lets start calculating!" << std::endl;

    while(mode != 5)
    {
        std::cout << "Type 'help' if you need some help" << std::endl;
        std::cout << "Type 'exit' if you want to close this program" << std::endl;

        mode = Input(a, b);

        if(mode != 0 && mode != 5)
            Action(mode, a, b);
    }

    return 0;
}