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

bool Board::_isSpace(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(_boardHeight[i][j]<4) return true;
		}
	}
	return false;
}

bool Board::gameOver(){
	if(!_isSpace())return false;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){//checking straight lines in 3 dimensions
			if(_board[0][i][j]==_players[_player]&&_board[1][i][j]==_players[_player]&&_board[2][i][j]==_players[_player]&&_board[3][i][j]==_players[_player]) return true;
			if(_board[i][0][j]==_players[_player]&&_board[i][1][j]==_players[_player]&&_board[i][2][j]==_players[_player]&&_board[i][3][j]==_players[_player]) return true;
			if(_board[i][j][0]==_players[_player]&&_board[i][j][1]==_players[_player]&&_board[i][j][2]==_players[_player]&&_board[i][j][3]==_players[_player]) return true;
		}
		for(int i=0; i<4; i++){//checking diagonal lines in 3 dimensions
			if(_board[i][0][0]==_players[_player]&&_board[i][1][1]==_players[_player]&&_board[i][2][2]==_players[_player]&&_board[i][3][3]==_players[_player]) return true;
			if(_board[i][0][3]==_players[_player]&&_board[i][1][2]==_players[_player]&&_board[i][2][1]==_players[_player]&&_board[i][3][0]==_players[_player]) return true;
		}
		for(int i=0; i<4; i++){
			if(_board[0][i][0]==_players[_player]&&_board[1][i][1]==_players[_player]&&_board[2][i][2]==_players[_player]&&_board[3][i][3]==_players[_player]) return true;
			if(_board[0][i][3]==_players[_player]&&_board[1][i][2]==_players[_player]&&_board[2][i][1]==_players[_player]&&_board[3][i][0]==_players[_player]) return true;
		}
		for(int i=0; i<4; i++){
			if(_board[0][0][i]==_players[_player]&&_board[1][1][i]==_players[_player]&&_board[2][2][i]==_players[_player]&&_board[3][3][i]==_players[_player]) return true;
			if(_board[3][0][i]==_players[_player]&&_board[2][1][i]==_players[_player]&&_board[1][2][i]==_players[_player]&&_board[0][3][i]==_players[_player]) return true;
		}
		if(_board[0][0][0]==_players[_player]&&_board[1][1][1]==_players[_player]&&_board[2][2][2]==_players[_player]&&_board[3][3][3]==_players[_player]) return true;
		if(_board[0][0][3]==_players[_player]&&_board[1][1][2]==_players[_player]&&_board[2][2][1]==_players[_player]&&_board[3][3][0]==_players[_player]) return true;
		if(_board[0][3][0]==_players[_player]&&_board[1][2][1]==_players[_player]&&_board[2][1][2]==_players[_player]&&_board[3][0][3]==_players[_player]) return true;
		if(_board[0][3][3]==_players[_player]&&_board[1][2][2]==_players[_player]&&_board[2][1][1]==_players[_player]&&_board[3][0][0]==_players[_player]) return true;
	}
	return false;
}

void Board::getMove(){
	int vertical, horizontal;
	Board::_print();
	_player=(_player+1)%2;//gives index of player
	std::string playerName[2]={"Rubinowy","Blekitny"};
	std::cout<<"\nGracz "<<playerName[_player]<<"\nPodaj pozioma i pionowa wspolrzedna\n";
	std::cin>>vertical>>horizontal;	
	if(vertical<=4 && horizontal<=4) Board::_move(vertical-1,horizontal-1);
}

void Board::_print(){
	std::cout<<"Drukowanie planszy od dolu\n";
	for(int i=0; i<4; i++){
		std::cout<<std::endl;
		for(int j=0; j<4; j++){
			std::cout<<std::endl;
			for(int k=0; k<4; k++){
				if(_board[i][j][k]==field::red) std::cout<<"|R|";
				else if(_board[i][j][k]==field::blue) std::cout<<"|B|";
				else std::cout<<"|_|";
			}
		}	
	}
}

void Board::_move(int vertical, int horizontal){
	_board[_boardHeight[vertical][horizontal]][vertical][horizontal]=_players[_player];
	_boardHeight[vertical][horizontal]++;
}
