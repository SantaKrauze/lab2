#include "Complex0.hpp"

Complex0::Complex0(){
	compNum.at(0) = 0;
	compNum.at(1) = 0;
}

Complex0::Complex0 (float r, float i){
	compNum.at(0) = r;
	compNum.at(1) = i;
}

Complex0 Complex0::addComplex (Complex0& Z){
	Complex0 Z2;
	Z2.setRe (this->getRe() + Z.getRe());
	Z2.setIm (this->getIm() + Z.getIm());
	return Z2;
}

Complex0 Complex0::addComplex (float R){
	Complex0 Z2;
	Z2.setRe (this->getRe() + R);
	Z2.setIm (this->getIm());
	return Z2;
}

Complex0 Complex0::multiplyComplex (Complex0& Z){
	Complex0 Z2;
	Z2.setRe (this->getRe()*Z.getRe() - this->getIm()*Z.getIm());
	Z2.setIm (this->getRe()*Z.getIm() + Z.getRe()*this->getIm());
	return Z2;
}

Complex0 Complex0::multiplyComplex (float R){
	Complex0 Z2;
	Z2.setRe (this->getRe()*R);
	Z2.setIm (this->getIm()*R);
	return Z2;
}

Complex0 Complex0::conjugate (){
	Complex0 Z;
	Z.setRe (this->getRe());
	Z.setIm (-this->getIm());
	return Z;
}
