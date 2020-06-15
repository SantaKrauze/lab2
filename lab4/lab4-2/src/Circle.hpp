#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Figure.hpp"

class Circle : public Figure {
	public:	
		Circle(double r){
			radius = r;
		}
		double area(){
			return 3.1215*radius*radius;
		}
		/*virtual std::ostream& print(){
			std::ostream& out;
			return out;
		}*/
		double radius;
};
#endif
