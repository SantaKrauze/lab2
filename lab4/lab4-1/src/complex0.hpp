#ifndef COMPLEX0_HPP_INCLUDED
#define COMPLEX0_HPP_INCLUDED
#include <iostream>

class Complex0{
	public:
		Complex0 operator+ (Complex0& Z){
			return addComplex(Z);
		}
		Complex0 operator- (Complex0& Z){
			return removeComplex(Z);
		}	
		Complex0 operator* (Complex0& Z){
			return multiplyComplex(Z);
		}
		std::ostream& operator<< (std::ostream& out, Complex0& Z){
			return //
		}
	private:
		Complex0 addComplex();
		Complex0 removeComplex();
		Complex0 multiplycomplex();
		int Re(){
			return real;
		}
		int Im(){
			return imag;
		}
};
#endif
