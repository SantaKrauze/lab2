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
		std::cout<<"\n1.pokaz macierz \t 2.dodaj wartosc \t 3.pomnoz przez skalar \t 4.mnozenie macierzy \t 5. dodawanie macierzy \t 0.zakoncz\n";
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
			case 3:
				std::cout<<"1.macierz A 2.macierz B\n";
				std::cin>>option;
				switch (option){
					case 1:
						matrixA.multiplyByInt();
						break;
					case 2:
						matrixB.multiplyByInt();
						break;
				}
				break;
			case 4:
				//multiply
				break;
			case 5:
				//add
				break;
			case 0:
				break;
		}
	}
	return 0;
}
