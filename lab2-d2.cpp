#include <iostream>
#include "3dboard.hpp"

int main(){
	Board board;
	while(!board.gameOver()){
		board.getMove();
	}
	return 0;
}
