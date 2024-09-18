#include <iostream>
#include <string>
#include "pwgFN.h"

int main(void)
{
    int passLen;
    std::cout << "Enter the password lenght: ";
    std::cin >> passLen;
    PassGen pg;
    std::string password = pg.Gen(passLen);
    std::cout << "Your pass is: " << password << "\n";

    return 0;
}
