#include "3dboard.hpp"

Board::Board(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<4; k++) _board[i][j][k]=field::empty;
		}	
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++) _boardHeight[i][j]=0;
	}
}

bool Board::gameOver(){
	return false;
}

int Board::getMove(){
	int v,h;
	Board::_print();
	std::cout<<"\nPodaj pionowa i pozioma wspolrzedna\n";
	std::cin>>v>>h;
	_player++;
	Board::_move(v-1,h-1);
	return 0;
}

void Board::_print(){
	std::cout<<"Drukowanie planszy od dolu\n";
	for(int i=0; i<4; i++){
		std::cout<<std::endl;
		for(int j=0; j<4; j++){
			std::cout<<std::endl;
			for(int k=0; k<4; k++){
				if(_board[i][j][k]==field::red) std::cout<<"R";
				else if(_board[i][j][k]==field::blue) std::cout<<"B";
				else std::cout<<"_";
			}
		}	
	}
}

void Board::_move(int v, int h){
	_board[_boardHeight[v][h]][v][h]=_players[_player%2];
	_boardHeight[v][h]++;
}