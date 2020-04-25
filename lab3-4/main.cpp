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
	std::cin>>SparseMatrix::_rows>>SparseMatrix::_columns;
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
	//
}

void SparseMatrix::printMatrix(){
	//printing using _getValue()
}

double SparseMatrix::_getValue(int row, int col){
	double val = _matrix[ {row,col} ];
	return val;
}

int main(){
	std::cout<<"Hello what is this thing\n";
	SparseMatrix matrix;
	//switch to adding, printing etc
	matrix.addValue();
	return 0;
}
