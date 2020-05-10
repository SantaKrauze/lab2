#ifndef STRING_HPP
#define STRING_HPP

#include <iostream>
#include <string>

class String{
	public:
		String();
		bool match ();
		bool compareToPattern();

		const std::string& string;
		const std::string& pattern;
};

#endif
