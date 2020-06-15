#include "src/Circle.hpp"
#include "src/Figure.hpp"
#include "src/Triangle.hpp"
#include "src/Rectangle.hpp"

int main () {
	Circle circ(2);
	Figure *figure;
	figure = &circ;
	//Triangle tri(1,1,1);
	//Rectangle rect(2,3);
	return 0;
}
