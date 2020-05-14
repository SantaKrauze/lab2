#include "tictactoe.hpp"

void TicTacToe::pvpGame (){
	std::cout<<"Zaczynamy\n";
	do getMove();
	while (!gameOver());
	std::cout<<"Koniec gry\n";
	printBoard();
}

void TicTacToe::getMove (){
	int row,col;
	printBoard();
	if (players[playerIndex]==field::X) std::cout<<"O, ";
	else std::cout<<"X, ";
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
/*
void TicTacToe::pvcGame (){
	std::cout<<"Powodzenia\n";
	do {
		if (playerIndex==0) getMove();
		else{
			aiMove();
		}
	}
	while (!gameOver());
}

void TicTacToe::aiMove(){
	using boardTemplate = std::array< std::array<field, 3>, 3>;
	boardTemplate newBoard;
	std::array<int, 9> scores;
	int bestMove = minimax(1);
	std::cout<<"\nAI robi cos\n";
}

int TicTacToe::minimax (int index, int row, int col, int calls){
	calls++;

	if (pvcOver(1)) return -10;//if losing -10
	else if (pvcOver(0)) return 10;//if winning 10
	else if (!isSpace()) return 0;//if draw 0

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (board[i][j]==field::empty) minimax((index+1)%2, i, j, calls);
		}
	}
	return 0;
}*/

bool TicTacToe::pvcOver (int index){
	field player = players[index];
	if (player==field::X) std::cout<<"X\n";
	else std::cout<<"O\n";
	int winCounter = 0;
	for (auto i : possibleVictories){
		for (auto j : i){
			if (board[j[0]][j[1]]==player){
				winCounter++;
			}
		}
		if (winCounter==3) return true;
		winCounter = 0;
	}
	return false;
}

bool TicTacToe::gameOver (){
	if (!isSpace()) return true;
	field player = players[playerIndex];
	if (player==field::X) std::cout<<"X\n";
	else std::cout<<"O\n";
	int winCounter = 0;
	for (auto i : possibleVictories){
		for (auto j : i){
			if (board[j[0]][j[1]]==player){
				winCounter++;
			}	
		}
		if (winCounter==3) return true;
		winCounter = 0;
	}
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
		for (auto j : i) j = field::empty;
	}
}
