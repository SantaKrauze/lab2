#include <iostream>

enum class field {red, blue, empty};
void move(field **board, int n, int m, int player);
bool gameOver(field**board, int n, int m);
void print(field **board, int n, int m);
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
	print(board, n, m);
	return 0;
}

void move(field **board, int n, int m, int player){
	int col;
	field options[2]={field::red, field::blue};
	std::cout<<"Podaj kolumne:\n";
	std::cin>>col;
	int i=0;
	while(board[col][i]==field::empty && i<m) i++;
	board[col][i-1]=options[player];
}

bool gameOver(field**board, int n, int m){
	
}

void print (field **board, int n, int m){
	for (int i=0; i<n; i++){
		std::cout<<std::endl;
		for (int j=0; j<m; j++){
			if (board[i][j]==field::blue) std::cout<<"|B|";
			else if (board[n][m]==field::red) std::cout<<"|R|";
			else std::cout<<"| |";
		}
	}
}bool gameOver(field**board, int n, int m);
