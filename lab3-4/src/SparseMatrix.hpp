#ifndef SPARSEMATRIX_HPP
#define SPARSEMATRIX_HPP

#include <iostream>
#include <array>
#include <map>
#include <string>

class SparseMatrix{	
	public:
		void addValue(int row, int col, double val);
		void addValue();
		void printMatrix();
		void multiplyByInt();
		void addMatrixes();
		void multiplyMatrixes();
		void addInt();

		SparseMatrix();
	private:
		using DOK = std::map< std::array<int,2>, double >;
		DOK _matrix;
		int _rows,_columns;
		int _valQuantity = 0; //quantity of non-zero elements/ size of map
		double _getValue(int row, int col);
			
};

#endif
