#include "src/point2d.hpp"

int main (){
	Point2d a;
	std::cout << "a = " << a << std::endl;
	a.setXY(3, 4);
	std::cout << "a = " << a << std::endl;
	Point2d b(-2,-1);
	std::cout << "b = " << b << std::endl;
	Point2d c(b);
	std::cout << "c = " << c << std::endl;
	std::cout << "a.x = "   << a.getX() << std::endl;
	std::cout << "a.y = "   << a.getY() << std::endl;
	std::cout << "a.r = "   << a.getR() << std::endl;
	std::cout << "a.phi = " << a.getPhi() << std::endl;
	b.setRPhi(5,1);
	std::cout << "b = " << b << std::endl;
	return 0;
}
