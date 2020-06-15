#include "src/Circle.hpp"
//#include "src/Figure.hpp"
#include "src/Triangle.hpp"
#include "src/Rectangle.hpp"

int main () {
	Circle circ(2);
	Figure *figure1;
	figure1 = &circ;
	Triangle tri(3,4,5);
	Figure* figure2;
	figure2 = &tri;
	Rectangle rect(2,2);
	Figure* figure3;
	figure3 = &rect;
	std::cout<<"Circle area: "<<figure1->area()<<std::endl;
	std::cout<<"Triangle area: "<<figure2->area()<<std::endl;
	std::cout<<"Rectangle area: "<<figure3->area()<<std::endl;
	return 0;
}
