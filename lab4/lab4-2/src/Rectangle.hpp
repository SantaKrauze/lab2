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
		/*virtual std::ostream& print(){
			std::ostream& out;
			return out;
		}*/
		double A, B;
};
#endif
