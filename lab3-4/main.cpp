#include <iostream>
#include <array>
#include <vector>
#include <map>

class SparseMatrix{	
	public:
		void addValue(int row, int col, double val);
		void addValue();
		void printMatrix();
		SparseMatrix();
	private:
		using DOK = std::map< std::array<int,2>, double >;
		DOK _matrix;
		int _rows,_columns;
		int _valQuantity=0;//quantity of non-zero elements/ size of map
		double _getValue(int row, int col);
			
};

SparseMatrix::SparseMatrix(){
	std::cout<<"Podaj ilość kolumn i wierszy\n";
	std::cin>>_rows>>_columns;
	std::cout<<"Inicjalizacja macierzy "<<_rows<<"x"<<_columns<<std::endl;
	std::cout<<SparseMatrix::_valQuantity<<" niezerowych elementow\n";
}

void SparseMatrix::addValue(){
	int row,col;
	double val;
	std::cout<<"Podaj rzad i kolumne\n";
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
	//printing using _getValue()
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
	double val = _matrix[ {row,col} ];
	return val;
}

int main(){
	std::cout<<"Hello what is this thing\n";
	SparseMatrix matrix;
	//switch to adding, printing etc
	matrix.printMatrix();
	matrix.addValue();
	matrix.printMatrix();
	return 0;
}
