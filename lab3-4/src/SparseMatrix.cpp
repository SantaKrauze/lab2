#include "SparseMatrix.hpp"

void SparseMatrix::addValue (int row, int col, double val){
	if (row>_rows || col>_columns) return;
	_matrix[ {row, col} ]=val;
}

SparseMatrix::SparseMatrix (int row, int col){
	_rows=row;
	_columns=col;
	std::cout<<"Macierz "<<row<<"x"<<col<<std::endl;
}

void SparseMatrix::multiplyByInt(){
	int k;
	std::cout<<"\n\nMnozenie przez skalar\nPodaj skalar\n";
	std::cin>>k;
	for (auto i : _matrix) {
		_matrix.at(i.first) *= k;
	}
	printMatrix();
}

SparseMatrix SparseMatrix::addMatrixes (SparseMatrix& B){
	std::cout<<"\n\nDodawanie macierzy\n";
	if (this->_rows != B.rows() || this->_columns != B.columns()){
		std::cout<<"Rozne rozmiary macierzy (anuluje)\n";
		return *this;
	}
	for (int i = 1; i <= _rows; i++){
		for (int j = 1; j <= _columns; j++){
			if (_matrix[ {i, j} ] != 0 || B.getValue(i, j) != 0){
				_matrix[ {i, j} ] += B.getValue(i, j);
			}	
		}
	}
	printMatrix();
	return *this;
}

bool SparseMatrix::checkDiagonal(){
	for (auto i : _matrix){
		if (i.first.at(0) != i.first.at(1) && _matrix.at(i.first) != 0){
			std::cout<<"Macierz nie jest diagonalna\n";
			return false;
		}
	}
	return true;
}

void SparseMatrix::addInt(int n){
	std::cout<<"\n\nDodawanie liczby do macierzy (tylko dla diagonalnych)\n";	
	if (!checkDiagonal()) return;
	for (auto i : _matrix){
		if (i.first.at(0) == i.first.at(1)){
			_matrix.at(i.first) += n;
		}
	}
	printMatrix();
}

SparseMatrix SparseMatrix::multiplyMatrixes (SparseMatrix& B){
	if (this->_rows != B.rows()){
		std::cout<<"Nieodpowiednie rozmiary macierzy (anuluje)\n";
		return *this;
	}
	//
	printMatrix();
	return *this;
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

SparseMatrix::SparseMatrix (){
	std::cout<<"Podaj ilość kolumn i wierszy\n";
	std::cin>>_rows>>_columns;	
}

void SparseMatrix::addValue (){
	int row,col;
	double val;
	do{
		std::cout<<"\nDodawanie wartosci\n"<<"Podaj rzad i kolumne\n";
		std::cin>>row>>col;
		if (_matrix[ {row, col} ]!=0) std::cout<<"Poprzednia wartosc w tej komorce (nadpisuje)\n";
	}while (row>_rows||col>_columns);
	std::cout<<"Podaj wartosc\n";
	std::cin>>val;
	_matrix[ {row, col} ]=val;
}

void SparseMatrix::actionSwitch (SparseMatrix& B){
	std::cout<<"Powstały 2 macierze\n";
	int option = 1;
	while (option != 0){
		std::cout<<"1.Drukuj \t 2.Dodaj wartosc \t 3. k * M \n 4. Ma + Mb \t 5. Ma * Mb \t 0.Zakoncz \n";
		std::cin>>option;
		switch (option){
			case 1:
				std::cout<<"1.Macierz A \t 2.Macierz B \n";
				std::cin>>option;
				switch (option){
					case 1:
						this->printMatrix();
						break;
					case 2:
						B.printMatrix();
						break;
				}
				break;
			case 2:
				std::cout<<"1.Macierz A \t 2.Macierz B \n";
				std::cin>>option;
				switch (option){
					case 1:
						this->addValue();
						break;
					case 2:
						B.addValue();
						break;
				}
				break;
			case 3:
				std::cout<<"1.Macierz A \t 2.Macierz B \n";
				std::cin>>option;
				switch (option){
					case 1:
						this->multiplyByInt();
						break;
					case 2:
						B.multiplyByInt();
						break;
				}
				break;
			case 4:
				*this = *this + B;
				break;
			case 5:
				*this = *this * B;
				break;
			case 0:
				break;
		}
	}
}
