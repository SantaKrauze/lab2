#include <iostream>

enum class field {red, blue, empty};

void print(field **board, int n, int m);
int main(){
	field**board;
	int n,m;
	std::cin>>n>>m;
	board=new field*[n];
	for(int i=0; i<n; i++){
		board[i]=new field[m];
	}
	field players [2]={field::red, field::blue};
	//print(board, n, m);
	return 0;
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
}
