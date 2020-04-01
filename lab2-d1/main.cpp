#include <iostream>

enum class field {red, blue, empty};
class Board{
	public:
		Board();
		~Board();
		void getMove();
		bool gameOver();
	private:
		field _board;
		void _move(int v, int h);
		void _print();
};
int main(){
	field**board;
	int n,m;
	std::cout<<"CONNECT FOUR\n"<<"Podaj ilosc kolumn i rzedow planszy\n";
	std::cin>>n>>m;
	board=new field*[n];
	for(int i=0; i<n; i++){
		board[i]=new field[m];
	}
	field players [2]={field::red, field::blue};
	printBoard(board, n, m);
	return 0;
}

void Board::_move(int v, int h){
	int col;
	field options[2]={field::red, field::blue};
	std::cout<<"Podaj kolumne:\n";
	std::cin>>col;
	int i=0;
	while(board[col][i]==field::empty && i<m) i++;
	board[col][i-1]=options[player];
}
void Board::_print(){
	for (int i=0; i<n; i++){
		std::cout<<"aktualnie\n"<<std::endl;
		for (int j=0; j<m; j++){
			if (board[i][j]==field::blue) std::cout<<"|B|";
			else if (board[n][m]==field::red) std::cout<<"|R|";
			else std::cout<<"| |";
		}
	}
}
