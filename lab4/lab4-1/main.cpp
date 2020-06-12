#include "src/Complex0.hpp"

int main () {
	Complex0 Z1 (1,1);
	Complex0 Z2 (2,2);
	Complex0 one (1,0);
	Complex0 i (0,1);
	Complex0 Z3 = i*i;
	Complex0 Z4 = Z1.conjugate();
	Complex0 Z5 = Z1+1.4;
	std::cout<<"Z1 = "<<Z1<<std::endl;
	std::cout<<"i*i = "<<Z3<<std::endl;
	std::cout<<"Conjugate of Z1 = "<<Z4<<std::endl;
	std::cout<<"Z1 + 1.4 = "<<Z5<<std::endl;
	return 0;
}
