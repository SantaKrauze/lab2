#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Figure.hpp"

class Circle :virtual public Figure {
	public:	
		Circle(double r){
			//center[0] = x;
			//center[1] = y;
			radius = r;
		}
		virtual double area(){
			return 3.1215*radius*radius;
		}
		/*virtual std::ostream& print(){
			std::ostream& out;
			return out;
		}*/
		double radius;
		//std::array <double,2> center;
};
#endif
