#include <iostream>
#include <array>
class SparseMatrix{	
	public:
		SparseMatrix();
	pirivate:
		int n,m;
		std::array < std::array<int,m> , n > _matrix;
}

SparseMatrix::SparseMatrix(){
	std::cout<<"Podaj ilość kolumn i wierszy\n";
	std::cin>>n>>m;
	for (auto row : _matrix)
		for (auto val : _matrix )
			val=0;
}

int main(){
	std::cout<<"Hello what is this thing\n";
	SparseMatrix matrix;
	return 0;
}
