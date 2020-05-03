#include "tictactoe.hpp"

void TicTacToe::getMove (){
	int row,col;
	if (players[playerIndex]==field::X) std::cout<<"X, ";
	else std::cout<<"O, ";
	std::cout<<"rzad i kolumna\n";
	std::cin>>row>>col;
	std::cout<<row<<col<<"\n";
	while (!boundCheck(row, col)){
		std::cout<<"zle, jeszcze raz\n";
		std::cin.clear();
		//std::cin>>row>>col;
	}
	fill(row, col);
}

bool TicTacToe::boundCheck (int row, int col){
	if (row>0&&row<4&&col>0&&col<4) return true;
	else return false;
}

bool TicTacToe::gameOver (){
	//
	return false;
}

bool TicTacToe::isSpace (){
	//
	return true;
}

void TicTacToe::fill (int row, int col){
	//std::cout<<"fill() start\n";
	playerIndex=(playerIndex+1)%2;
	//std::cout<<"player:"<<playerIndex<<std::endl;
}

void TicTacToe::printBoard (){
	//
}

TicTacToe::TicTacToe (){
	playerIndex=0;
}
