#include <iostream>
#include <string>
#include "unindent.h"

int main()
{
    std::string l;
    while (std::getline(std::cin, l))
    {
        std::cout << removeLeadingSpaces(l);
    }
    return 0;
}
