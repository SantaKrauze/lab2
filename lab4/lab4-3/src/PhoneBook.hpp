#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <map>
#include <string>
#include <fstream>

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void setData(std::string key, std::string data);
		void printFile();
	private:
		std::map <std::string, std::string> phonebook;
		std::ofstream outBook;
		std::ifstream inBook;
		std::string filePath = "phonebook";
};
#endif
