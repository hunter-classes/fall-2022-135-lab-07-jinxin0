#include <algorithm>
#include "unindent.h"
#include "indent.h"

int countChar(std::string line, char c)
{
    return std::count(line.cbegin(), line.cend(), c);
}

std::string addLeadingSpaces(std::string line)
{
    static int indent_level = 0;
	indent_level -= countChar(line, '}');
	std::string s = std::string(indent_level, '\t') + removeLeadingSpaces(line);
    indent_level += countChar(line, '{');
	return s;
}
