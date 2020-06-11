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
		std::string getData(std::string key);
		void printFile();
	private:
		std::ofstream outBook;
		std::ifstream inBook;
		std::string filePath = "phonebook";
		std::map <std::string, std::string> book;
};
#endif
