#ifndef SPARSEMATRIX_HPP
#define SPARSEMATRIX_HPP

#include <iostream>
#include <array>
#include <map>
#include <string>

class SparseMatrix{	
	public:	
		void actionSwitch (SparseMatrix& B);
		SparseMatrix();
		void printMatrix();
		SparseMatrix(int row, int col);
		void addValue(int row, int col, double val);
		std::map< std::array<int,2>, double > _matrix;

	//private:
		SparseMatrix operator+ (SparseMatrix& B){
			return addMatrixes(B);
		}
		SparseMatrix operator* (SparseMatrix& B){
			return multiplyMatrixes(B);
		}
		int getValue (int row, int col){
			return _matrix[ {row, col} ];
		}
		int rows(){
			return _rows;
		}
		int columns(){
			return _columns;
		}
		void addValue();	
		void multiplyByInt();
		SparseMatrix addMatrixes(SparseMatrix& B);
		SparseMatrix multiplyMatrixes(SparseMatrix& B);
		void addInt();
		//std::map< std::array<int,2>, double > _matrix;
		int _rows,_columns;
		int _valQuantity = 0;
		double _getValue(int row, int col);
			
};
#endif
