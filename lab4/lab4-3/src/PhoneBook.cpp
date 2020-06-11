#include "PhoneBook.hpp"


PhoneBook::PhoneBook(){	
	//std::cout<<"Mapping\n";
	inBook.open(filePath);
	std::string key;
	std::string data;
	while (std::getline(inBook, key)){
		std::getline(inBook,data);
		//std::cout<<key<<std::endl<<data<<std::endl;
		phonebook [key] = data;
	}
	inBook.close();
}

PhoneBook::~PhoneBook(){
	outBook.open(filePath);
	for (auto i : phonebook){
		outBook<<i.first<<'\n'<<phonebook.at(i.first)<<'\n';
	}
	outBook.close();
}

void PhoneBook::setData(std::string key, std::string data){
	phonebook.at(key) = data;
}

void PhoneBook::printFile(){
	std::cout<<"\nPrinting the phone book...\n";
	int j = 0;
	for (auto i : phonebook){
		j++;
		std::cout<<j<<": ";
		std::cout<<i.first<<"---"<<phonebook.at(i.first)<<'\n';
	}
	std::cout<<'\n';
}
