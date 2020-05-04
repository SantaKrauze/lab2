#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>

class String{
	public:
		String();
		bool match (string& pattern, string& string);
		bool compareToPattern();

		const std::string& string;
		const std::string& pattern;
}

#endif
