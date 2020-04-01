#include "2dboard.hpp"

Board::Board(){
	std::cout<<"Podaj rozmiary planszy\n";
	std::cin>>m>>n;
	_board=new field*[n];
	for(int i=0; i<n; i++) _board[i]=new field[m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) _board[i][j]=field::empty;
	}

	_boardHeight=new int[m];
	for(int i=0; i<m; i++) _boardHeight[i]=0;
}
Board::~Board(){
	delete _boardHeight;
	for(int i=0; i<m; i++) delete[] _board[i];
	delete[] _board;
}

bool Board::_isSpace(){
	for(int i=0; i<m; i++){
		if(_boardHeight[i]<=n) return true;
	}
	return false;
}

bool Board::gameOver(){
	if(!Board::_isSpace()) return false;
	return false;
}

void Board::getMove(){
	int col;
	Board::_print();
	_player=(_player+1)%2;
	std::string playerName[2]={"rubinowy","blekitny"};
	std::cout<<"\nGracz "<<playerName[_player]<<"\nPodaj kolumne\n";
	std::cin>>col;
	if(col<=n) Board::_move(col-1);

}

void Board::_move(int col){
	_board[_boardHeight[col]][col]=_players[_player];
	_boardHeight[col]++;
}
void Board::_print(){
	for (int i=n-1; i>=0; i--){
		std::cout<<std::endl;
		for (int j=0; j<m; j++){
			if (_board[i][j]==field::blue) std::cout<<"|B|";
			else if (_board[i][j]==field::red) std::cout<<"|R|";
			else std::cout<<"| |";
		}
	}
	std::cout<<std::endl;
}
