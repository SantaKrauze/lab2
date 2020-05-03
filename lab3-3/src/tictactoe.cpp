#include "tictactoe.hpp"

void TicTacToe::game (){
	std::cout<<"Zaczynamy\n";
	while (!gameOver()) getMove();
	std::cout<<"Koniec gry\n";
	printBoard();
}

void TicTacToe::getMove (){
	int row,col;
	printBoard();
	if (players[playerIndex]==field::X) std::cout<<"X, ";
	else std::cout<<"O, ";
	std::cout<<"rzad i kolumna\n";
	std::cin>>row>>col;
	while (!boundCheck(row-1, col-1)){
		std::cout<<"zle, jeszcze raz\n";
		std::cin.clear();
		std::cin>>row>>col;
	}
	fill(row-1, col-1);
}

bool TicTacToe::boundCheck (int row, int col){
	if (board[row][col]==field::X||board[row][col]==field::O){
		std::cout<<"Zajete\n";
		return false;
	}
	if (row>=0&&row<=2&&col>=0&&col<=2) return true;
	else return false;
}

bool TicTacToe::gameOver (){
	if (!isSpace()) return true;
	return false;
}

bool TicTacToe::isSpace (){
	for (auto i : board){
		for (auto j : i){
			if (j == field::empty) return true;
		}
	}
	return false;
}

void TicTacToe::fill (int row, int col){
	playerIndex=(playerIndex+1)%2;
	board[row][col]=players[playerIndex];
}

void TicTacToe::printBoard (){
	for (auto i : board){	
		for (auto j : i){
			if (j == field::X) std::cout<<"|X|";
			else if (j == field::O) std::cout<<"|O|";
			else std::cout<<"| |";
		}
		std::cout<<std::endl;
	}
}

TicTacToe::TicTacToe (){
	playerIndex=0;
	for (auto i : board){
		for (auto j : i){
			j=field::empty;
		}
	}
}
