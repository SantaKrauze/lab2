#include <iostream>

bool isSpace(int board[3][3]);
void printBoard(int board[3][3]);
bool gameOver(int board[3][3]);
bool circle(int board[3][3]);
bool cross(int board[3][3]);

int main(){
    int k,l;
    int board[3][3];

    for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                board[i][j]=0;
            }
    }

    std::cout<<"\nUUUUU KOLKO I KRZYZYK\n";
    printBoard(board);
    while (isSpace(board)==true)
    {
        if(gameOver(board)==false)circle(board);
        if(gameOver(board)==false)cross(board);
    }
    return 0;

}
void printBoard(int board[3][3]){
    for (int i = 0; i < 3; i++){
        std::cout<<std::endl;
        for (int j = 0; j < 3; j++){
            if (board[i][j]==1) std::cout<<"X ";
            else if (board[i][j]==2) std::cout<<"O ";
            else std::cout<<"  ";
        }
    }
}
bool circle(int board[3][3]){
    int k,l;
    std::cout<<std::endl<<"Gdzie kolko? Podaj rzad i kolumne:\n";
    std::cin>>k>>l;
    if(k<4&&l<4&&k>0&&l>0&&board[k-1][l-1]==0){
        board[k-1][l-1]=2;
        printBoard(board);
    } 
    else {
        std::cout<<"ZLE\n";
        return false;
    }
    return true;
}
bool cross(int board[3][3]){
    int k,l;
    std::cout<<std::endl<<"Gdzie krzyzyk? Podaj rzad i kolumne:\n";
    std::cin>>k>>l;
    
    if(k<4&&l<4&&k>0&&l>0&&board[k-1][l-1]==0){
        board[k-1][l-1]=1;
        printBoard(board);
    } 
    else {
        std::cout<<"ZLE\n";
        return false;
    }
    return true;
}
bool gameOver(int board[3][3]){
    int o,x=0;
    if (isSpace(board)==false) return true;
    for (int j = 1; j < 3; j++){
        for (int i = 0; i < 3; i++){
            if (board[i][0]==j&&board[i][1]==j&&board[i][2]==j) return true;
            if (board[0][i]==j&&board[1][i]==j&&board[2][i]==j) return true;
        }
    }
    
    if (board[0][0]!=0&&board[1][1]!=0&&board[2][2]!=0) return true;
    if (board[2][0]!=0&&board[1][1]!=0&&board[0][2]!=0) return true;

    return false;
}

bool isSpace(int board[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j]==0) return true;
        }
    }
    return false;
}