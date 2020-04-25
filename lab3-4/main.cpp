#include <iostream>
#include <array>
#include <map>
#include <string>
#include "src/SparseMatrix.hpp"

int main(){
	std::cout<<"Hello what is this thing\n";
	SparseMatrix matrixA;
	SparseMatrix matrixB;
	int option=1;
	while(option!=0){
		std::cout<<"\n1.print \t 2.add value \t 0.zakoncz\n";
		std::cin>>option;
		switch (option){
			case 1:
				std::cout<<"1.macierz A 2.macierz B\n";
				std::cin>>option;
				switch (option){
					case 1:
						matrixA.printMatrix();
						break;
					case 2:
						matrixB.printMatrix();
						break;
				}
				break;
			case 2:
				std::cout<<"1.macierz A 2.macierz B\n";
				std::cin>>option;
				switch (option){
					case 1:
						matrixA.addValue();
						break;
					case 2:
						matrixB.addValue();
						break;
				}
				break;
			case 0:
				break;
		}
	}
	return 0;
}
