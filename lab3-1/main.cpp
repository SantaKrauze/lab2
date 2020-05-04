#include <iostream>

class String{
	public:
		String();
		bool match (string& pattern, string& string);
		bool compareToPattern();

		const std::string& string;
		const std::string& pattern;
}

String::String(){
	std::cout<<"Podaj napis:\n";
	std::cin>>string;
	std::cout<<"Podaj wzorzec:\n";
	std::cin>>pattern
}

bool String::match(string& pattern,string& string){
	
	return true;//true if ok
}

int main(){
	String string;
	string.match(string.string, string.pattern);
	return 0;
}
