#include <iostream>
#include "3dboard.hpp"

int main(){
	Board board;
	while(board.gameOver()==false){
		board.getMove();
	}
	return 0;
}
