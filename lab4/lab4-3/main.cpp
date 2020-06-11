#include "src/PhoneBook.hpp"

int main () {
	PhoneBook book;
	book.setData("adam", "adam@email.com");
	book.printFile();
	return 0;
}
