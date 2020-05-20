#include <iostream>

enum class field {X,O,_};

bool isSpace(field board[3][3]);
void printBoard(field board[3][3]);
bool gameOver(field board[3][3]);
bool fill(int I,field board[3][3]);
void setGame(field board[3][3]);

int main(){
	field board[3][3];
	setGame(board);
	int playerIndex=0;
	while (!gameOver(board)){
		fill(playerIndex,board);
		playerIndex=(playerIndex+1)%2;
	}
    	std::cout<<"\nKoniec gry\n";
	return 0;
}

void setGame(field board[3][3]){
	for (int i = 0; i < 3; i++){//filling with empty spaces
		for (int j = 0; j < 3; j++){
			board[i][j]=field::_;
		}
	}
	std::cout<<"\nUUUUU KOLKO I KRZYZYK\n";
	printBoard(board);
}

void printBoard(field board[3][3]){
    for (int i = 0; i < 3; i++){
        std::cout<<std::endl;
        for (int j = 0; j < 3; j++){
            if (board[i][j]==field::X) std::cout<<"|X|";
            else if (board[i][j]==field::O) std::cout<<"|O|";
            else std::cout<<"| |";
        }
    }
}

bool fill(int playerIndex,field board[3][3]){
	char playerSignature[2]={'X','O'};
	field player[2]={field::X,field::O};
	int col,row;
	std::cout<<std::endl<<playerSignature[playerIndex]<<" Podaj rzad i kolumne:\n";
	std::cin>>col>>row;
	while(col>4||col<1||row>4||row<1||board[col-1][row-1]!=field::_){//while space not within the board or not empty - repeat cin
		std::cout<<"Zle podaj jeszcze raz\n";
    		std::cin>>col>>row;
	}
	board[col-1][row-1]=player[playerIndex];//if all ok - place X/O
	printBoard(board);
        return true;
}

bool gameOver(field board[3][3]){
    
    if (isSpace(board)==false) return true;//if no space on the board- game over
    field player[2]={field::X,field::O};
    for (int j=0; j<2; j++){
    	for (int i = 0; i < 3; i++){
		if (board[i][0]==player[j] && board[i][1]==player[j] && board[i][2]==player[j]) return true;//vertical and horizontal 
        	if (board[0][i]==player[j] && board[1][i]==player[j] && board[2][i]==player[j]) return true;
    	}
    	if (board[0][0]==player[j] && board[1][1]==player[j] && board[2][2]==player[j]) return true;//diagonal
    	if (board[2][0]==player[j] && board[1][1]==player[j] && board[0][2]==player[j]) return true;
    }
    return false;
}

bool isSpace(field board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j]==field::_) return true;//if theres space somewhere - isSpace=true
        }
    }
    return false;
}
