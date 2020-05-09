#ifndef SPARSEMATRIX_HPP
#define SPARSEMATRIX_HPP

#include <iostream>
#include <array>
#include <map>
#include <string>

class SparseMatrix{	
	public:	
		SparseMatrix(int row, int col);	
		SparseMatrix();
		void addValue();	
		void multiplyByInt();
		void printMatrix();
		void actionSwitch (SparseMatrix& B);
		void addValue(int row, int col, double val);	
		void addInt(int n);
		SparseMatrix operator+ (SparseMatrix& B){
			return addMatrixes(B);
		}
		SparseMatrix operator* (SparseMatrix& B){
			return multiplyMatrixes(B);
		}
	private:
		
		double getValue (int row, int col){
			return _matrix[ {row, col} ];
		}
		int rows(){
			return _rows;
		}
		int columns(){
			return _columns;
		}
		bool checkDiagonal();	
		SparseMatrix addMatrixes(SparseMatrix& B);
		SparseMatrix multiplyMatrixes(SparseMatrix& B);
		std::map< std::array<int,2>, double > _matrix;
		int _rows,_columns;
			
};
#endif
