#include "SparseMatrix.hpp"

SparseMatrix::SparseMatrix(){
	std::cout<<"Podaj ilość kolumn i wierszy\n";
	std::cin>>_rows>>_columns;
	std::cout<<"Inicjalizacja macierzy "<<_rows<<"x"<<_columns<<std::endl;
	std::cout<<SparseMatrix::_valQuantity<<" niezerowych elementow\n";
}

void SparseMatrix::addValue(){
	int row,col;
	double val;
	std::cout<<"\nDodawanie wartosci\n"<<"Podaj rzad i kolumne\n";
	std::cin>>row>>col;
	std::cout<<"Podaj wartosc\n";
	std::cin>>val;
	_matrix[ {row, col} ]=val;
	std::cout<<row<<"x"<<col<<"="<<val<<std::endl;
	_valQuantity++;
	std::cout<<"Ilosc niezerowych elementow: "<<_valQuantity<<std::endl;
}

void SparseMatrix::addValue(int row, int col, double val){
	_matrix[ {row, col} ]=val;
	std::cout<<row<<"x"<<col<<"="<<val<<std::endl;
	_valQuantity++;
	std::cout<<"Ilosc niezerowych elementow: "<<_valQuantity<<std::endl;
}

void SparseMatrix::printMatrix(){
	std::cout<<"\nObecny stan macierzy\n";
	for(int i = 1; i <= _rows; i++){
		for(int j = 1; j <= + _columns; j++){
			if (_matrix[ {i, j} ]!=0){
				std::cout<<_matrix[ {i, j} ]<<"\t";
			}
			else std::cout<<"0\t";
		}
		std::cout<<std::endl;
	}
}

double SparseMatrix::_getValue(int row, int col){
	return _matrix[ {row,col} ];
}
