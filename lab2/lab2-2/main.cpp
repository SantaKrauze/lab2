#include <iostream>

void printTable(int**table, int N, int M);
void fillTable(int**table, int N, int M);

int main(){

	int N,M=0;
	int **table;
	std::cout<<"Tu powstanie tablica N*M\n"<<"Podaj N i M:\n";
	std::cin>>N>>M;
	table=new int*[N];
	for (int i = 0; i < N; i++){//malloc
		table[i]=new int[M];
	}
	fillTable(table, N, M);
	printTable(table, N, M);
	for (int i=0; i<N; i++) delete[] table[i];//freeing memory
	delete[] table;
	return 0;
}

void fillTable(int**table, int N, int M){
	for(int i=1; i<=N; i++){//saving to array and printing
		for(int j=1; j<=M; j++){
			table[i-1][j-1]=i*j;
		}
		std::cout<<std::endl;	
	}		
}

void printTable(int**table, int N, int M){
	std::cout.width(6);
	std::cout<<std::right<<"X|";
	for(int i=1; i<=M; i++){
		std::cout.width(5);
		std::cout<<std::right<<i;
	}
	std::cout<<std::endl;

	for(int i=0; i<=M; i++) std::cout<<"______";
	std::cout<<std::endl;

	for(int i=0; i<N; i++){
		std::cout.width(5);
		std::cout<<std::right<<i+1<<"|";
		for(int j=0; j<M; j++){
			std::cout.width(5);
			std::cout<<std::right<<table[i][j];
		}
		std::cout<<std::endl;
	}
}
