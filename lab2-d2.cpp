#include <iostream>

enum class field {red, blue, empty};
class Board{
	Board board[4][4][4];
	public:
		Board();	
		int getMove();
		bool gameOver(field board[4][4][4]);
	private:
		void _print(Board board);
		void _move(int i);
};
int main(){
	
	Board::_print(Board::board);
	return 0;
}

void Board::_print(Board board){
	std::cout<<"Drukowanie planszy od dolu\n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<4; k++){
				//if(Board::board[i][j][k]==field::red) std::cout<<"R";
				//else if(Board::board[i][j][k]==field::red) std::cout<<"R";
				//else std::cout<<" ";
			}
		}	
	}
}

int Board::getMove(){
	int i;
	Board::_print(Board::board);
	std::cin>>i;
	Board::_move(i);
	return i;
}

Board::Board(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			//for(int k=0; k<4; k++) Board::board[i][j][k]=field::empty;
		}	
	}
}

void Board::_move(int i){
	//int i=Board::getMove;
}
