#include <iostream>
#include "src/2dboard.hpp"

int main(){
	Board board;
	std::cout<<"Connect four\n";
	while(!board.gameOver()){
		//std::cout<<"1 ok\n";
		board.getMove();
	}
	std::cout<<"Koniec";
	return 0;
}
