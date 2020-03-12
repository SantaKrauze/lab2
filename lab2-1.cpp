#include <iostream>

enum class field {X,O,_};

bool isSpace(field board[3][3]);
void printBoard(field board[3][3]);
bool gameOver(field board[3][3]);
bool fill(int I,field board[3][3]);

int main(){
    field board[3][3];
    for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                board[i][j]=field::_;
            }
    }
    field val[2]={field::O,field::X};
    std::cout<<"\nUUUUU KOLKO I KRZYZYK\n";
    printBoard(board);
    for (int I=0; I!=-1; I++){ 
        if(gameOver(board)==false)fill(I%2,board);
	else break;
    }
    std::cout<<"\nKoniec gry\n";
    return 0;

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
bool fill(int I,field board[3][3]){
    char opt[2]={'X','O'};
    field val[2]={field::X,field::O};
    int k,l;
    std::cout<<std::endl<<opt[I]<<" Podaj rzad i kolumne:\n";
    std::cin>>k>>l;
    if(k<4&&l<4&&k>0&&l>0&&board[k-1][l-1]==field::_){
        board[k-1][l-1]=val[I];
        printBoard(board);
    } 
    else {
        std::cout<<"ZLE\n";
        return false;
    }
    return true;
}

bool gameOver(field board[3][3]){//iteracja
    
    if (isSpace(board)==false) return true;
    field opt[2]={field::X,field::O};
    for (int j=0; j<2; j++){
    	for (int i = 0; i < 3; i++){
		if (board[i][0]==opt[j] && board[i][1]==opt[j] && board[i][2]==opt[j]) return true;
        	if (board[0][i]==opt[j] && board[1][i]==opt[j] && board[2][i]==opt[j]) return true;
    	}
    	if (board[0][0]==opt[j] && board[1][1]==opt[j] && board[2][2]==opt[j]) return true;
    	if (board[2][0]==opt[j] && board[1][1]==opt[j] && board[0][2]==opt[j]) return true;
    }
    return false;
}

bool isSpace(field board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j]==field::_) return true;
        }
    }
    return false;
}
