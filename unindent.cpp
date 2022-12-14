#include <cctype>
#include "unindent.h"

std::string remove_leading_spaces(std::string line)
{
    std::size_t i = 0;
    while (i < line.size() && std::isspace(line[i]))
        ++i;
    return line.substr(i) + '\n';
}
