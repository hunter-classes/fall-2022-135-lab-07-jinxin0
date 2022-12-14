#include <algorithm>
#include "unindent.h"
#include "indent.h"

int count_char(std::string line, char c)
{
    return std::count(line.cbegin(), line.cend(), c);
}

std::string add_leading_spaces(std::string line)
{
    static int indent_level = 0;
	indent_level -= count_char(line, '}');
	std::string s = std::string(indent_level, '\t') + removeLeadingSpaces(line);
    indent_level += count_char(line, '{');
	return s;
}
