#include "PhoneBook.hpp"


PhoneBook::PhoneBook(){	
	outBook.open(filePath, std::ios_base::app);
	inBook.open(filePath);
	std::cout<<"Opening\n";
}

PhoneBook::~PhoneBook(){
	outBook.close();
	inBook.close();
	std::cout<<"Closing\n";
}

std::string PhoneBook::getData(std::string key){
	std::string data;
	return data;
}

void PhoneBook::setData(std::string key, std::string data){
	//bool exists = 0;
	std::string line;
	while (std::getline(inBook, line)){
		if (line.compare(key) == 0){//if line = key;
			//exists = 1;
			return;
		}
	}
	outBook<<key<<'\n'<<data<<'\n';
	std::cout<<"Adding: "<<key<<": "<<data<<'\n';
}

void PhoneBook::printFile(){
	std::string line;
	std::cout<<"\nPrinting the phone book...";
	while (std::getline(inBook, line)){
		std::cout<<line<<'\n';
	}
}
