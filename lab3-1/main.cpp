#include <iostream>

class String{
	public:
		String();
		bool compareToPattern();

	private:
		const std::string& _string;
		const std::string& _pattern;
}

String::String(){
	std::cout<<"Podaj:\n";
	std::cin>>_string;
}

bool String::compareToPattern(){
	
	return true;//true if ok
}

int main(){
	String string;
	string.compareToPattern;
	return 0;
}
