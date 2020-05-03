#include "src/tictactoe.hpp"

int main (){
	TicTacToe board;
	std::cout<<"START\n";
	while (!board.gameOver()){
		board.getMove();
	}
	std::cout<<"KONIEC GRY\n";
	return 0;
}
