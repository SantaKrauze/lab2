#include <iostream>
#include "src/3dboard.hpp"

int main(){
	Board board;
	std::cout<<"Connect four ale w 3D. Ciezko to narysowac w terminalu? Tak...\n";
	while(!board.gameOver()){
		board.getMove();
	}
	std::cout<<"Koniec gry\n";
	return 0;
}
