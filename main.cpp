#include <iostream>
#include <string>
#include "unindent.h"
#include "indent.h"

// this is a change
int main()
{
    std::string unindent{};
    std::string indent{};
    std::string l;
    while (std::getline(std::cin, l))
    {
        unindent += remove_leading_spaces(l);
        indent += add_leading_spaces(l);
    }

    std::cout << unindent << '\n';
    std::cout << indent << '\n';

    return 0;
}
