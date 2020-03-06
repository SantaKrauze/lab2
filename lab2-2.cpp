#include <iostream>

int main(){

	int N,M=0;
	int **tab;
	std::cout<<"Podaj N i M:\n";
	std::cin>>N>>M;
	tab=new int*[N];
	for (int i = 0; i < N; i++){//alokacja
		tab[i]=new int[M];
	}

	for(int i=1; i<=N; i++){//druk i tablicowanie
		for(int j=1; j<=M; j++){
			tab[i-1][j-1]=i*j;
			std::cout<<i<<"*"<<j<<"="<<tab[i-1][j-1]<<" ";
		}
		std::cout<<std::endl;	
	}
	return 0;
}
