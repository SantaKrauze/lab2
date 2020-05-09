#include "src/SparseMatrix.hpp"

int main(){
	SparseMatrix matrixA (4, 4);
	SparseMatrix matrixB (4, 4);
	matrixA.addValue(1,1,34);
	matrixA.addValue(2,2,18.6);
	matrixA.addValue(3,3,17.1);
	matrixB.addValue(1,1,11);
	matrixB.addValue(3,3,56.3);
	matrixB.addValue(4,4,3.67);
	matrixB.addValue(3,2,33.3);
	matrixA.printMatrix();
	matrixB.printMatrix();
	matrixA = matrixA + matrixB;
	matrixA.printMatrix();
	matrixB.addInt(5);
	//matrixA.actionSwitch(matrixB);	
	return 0;
}
