#include <iostream>

enum class field {red, blue, empty};
class Board{
	
	public:	
		//Board();
		int getMove();
		bool gameOver();
	private:
		field _board[4][4][4];
		void _print();
		void _move(int v, int h);
};
int main(){
	Board board;
	board.getMove();
	return 0;
}

void Board::_print(){
	std::cout<<"Drukowanie planszy od dolu\n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<4; k++){
				if(_board[i][j][k]==field::red) std::cout<<"R";
				else if(_board[i][j][k]==field::blue) std::cout<<"B";
				else std::cout<<" ";
			}
		}	
	}
}

int Board::getMove(){
	int i,j;
	Board::_print();
	std::cin>>i>>j;
	Board::_move(i,j);
	return 0;
}
/*
Board::Board(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<4; k++) _board[i][j][k]=field::empty;
		}	
	}
}
*/
void Board::_move(int v, int h){
	//
}
