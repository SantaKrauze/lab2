#include "src/tictactoe.hpp"

int main (){
	TicTacToe board;
	//board.game();
	std::cout<<"START\n";
	while (!board.gameOver()){
		board.getMove();
	}
	std::cout<<"KONIEC GRY\n";
	
	return 0;
}
