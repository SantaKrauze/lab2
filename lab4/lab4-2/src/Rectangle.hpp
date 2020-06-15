#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Figure.hpp"

class Rectangle : virtual public Figure {
	public:
		Rectangle(double a, double b){
			A = a;
			B = b;
		}
		virtual double area(){
			return A*B;
		}
		std::ostream& print(std::ostream& out){
			return out<<A<<'x'<<B;
		}
		double A, B;
};
#endif
