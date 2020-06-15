#ifndef FIGURE_HPP
#define FIGURE_HPP
#include <iostream>
#include <array>
#include <cmath>

class Figure{
	public:
		virtual double area() = 0;
		//virtual std::ostream& print(std::ostream&) = 0;
		friend std::ostream& operator<< (std::ostream& out, Figure& figure);

};
#endif
