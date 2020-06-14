#include "src/Database.hpp"

int main () {
	Database <int, double> data;
	data.addItem (2,3);
	/*data.addItem (1,5.3);
	data.addItem (7,1);
	data.addItem (4,6.6);
	data.addItem (5,4.76);*/
	data.printAt (2);
	return 0;
}
