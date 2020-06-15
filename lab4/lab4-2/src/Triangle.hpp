#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "Figure.hpp"

class Triangle : virtual public Figure {
	public:
		Triangle(int a, int b, int c){
			A = a;
			B = b;
			C = c;
		}
		virtual double area(){
			double p=(A+B+C)/2;
			return sqrt(p*(p-A)*(p-B)*(p-C));
		}
		/*virtual std::ostream& print(){
			std::ostream& out;
			return out;
		}*/
		double A, B, C;
};
#endif
