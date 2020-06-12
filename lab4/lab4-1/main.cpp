#include "src/Complex0.hpp"

int main () {
	Complex0 Z1 (1,1);
	Complex0 Z2 (2,2);
	float R1 = 2.3;
	Complex0 Z3 = Z1 + R1;
	std::cout<<Z1<<std::endl<<Z2<<std::endl<<Z3<<std::endl;
	return 0;
}
