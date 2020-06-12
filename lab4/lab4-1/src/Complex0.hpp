#ifndef COMPLEX0_HPP_INCLUDED
#define COMPLEX0_HPP_INCLUDED
#include <iostream>
#include <array>

class Complex0{
	public:
		Complex0(float r, float i);
		Complex0 operator+ (Complex0& Z){
			return addComplex(Z);
		}
		Complex0 operator+ (float R){
			return addComplex(R);
		}
		Complex0 operator- (Complex0& Z){
			return subComplex(Z);
		}
		Complex0 operator* (Complex0& Z){
			return multiplyComplex(Z);
		}
		Complex0 operator* (float R){
			return multiplyComplex(R);
		}
		float getRe(){
			return compNum.at(0);
		}
		float getIm(){
			return compNum.at(1);
		}
		Complex0 conjugate (Complex0& Z);
		friend std::ostream& operator<< (std::ostream& out, Complex0& Z){
			return out<<Z.getRe()<<" + i*"<<Z.getIm();
		}
	private:
		Complex0 subComplex (Complex0& Z);
		Complex0 subComplex (float R);
		Complex0 addComplex (Complex0& Z);
		Complex0 multiplyComplex (Complex0& Z);
		Complex0 addComplex (float R);
		Complex0 multiplyComplex (float R);
		std::array<float, 2> compNum;
		void setRe (float r){
			compNum.at(0) = r;
		}
		void setIm (float i) {
			compNum.at(1) = i;
		}
};
#endif
