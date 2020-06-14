#include "src/Database.hpp"

int main () {
	Database <int, std::string> data;
	data.setValue (2,"two");
	data.setValue (1,"one");
	data.setValue (7,"seven");
	data.setValue (4,"four");
	data.setValue (5,"five");
	//std::cout<<data.getValue (2)<<std::endl;
	data.printAll();
	return 0;
}
