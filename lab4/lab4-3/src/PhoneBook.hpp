#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <map>
#include <string>

class PhoneBook {
	public:
		void setData();
		std::string getdata();
		void printData();
	private:
		std::map <std::string, std::string> book;
};
#endif
