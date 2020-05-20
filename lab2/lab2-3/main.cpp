#include <iostream>
#include <math.h>

void divisors(int**tab, int n, int*divQuant);
int divQuantity(int n);
void print(int**tab, int n, int*divQuant);

int main(){
	int n=0;
	std::cout<<"Podaj N:\n";
	std::cin>>n;
	if(n<=1) return 0;
	int numbers[n];//holds all the nums from 1-n
	int divQuant[n];
	for(int i=0; i<n; i++) numbers[i]=i+1;	
	int **tab;
	tab=new int*[n];//dynamic part one
	for(int i=0; i<n; i++){//dynamic part two
		divQuant[i]=divQuantity(numbers[i]);//makes an array of div quantities
		tab[i]=new int[divQuant[i]];
	}

	divisors(tab,n,divQuant);
	print(tab,n,divQuant);
	
	for(int i=0; i<n; i++){//freeing mem
		delete[] tab[i];
	}
	delete[] tab;
	return 0;
}

void print(int**tab, int n, int*divQuant){
	std::cout<<"\nTablica dzielnikow:\n";
	for(int i=0; i<n; i++){
		std::cout<<"Dzielniki "<<i+1<<":\t";
		for(int j=0; j<divQuant[i]; j++){
			std::cout<<tab[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
}

void divisors(int**tab, int n, int*divQuant){//fills the table with divisors
	int k=0;
	for(int i=0; i<n; i++){
		k=0;
		tab[0][0]=1;
		for(int j=0; j<i; j++){
			if ((i+1)%(j+1)==0){
				tab[i][k]=j+1;
				k++;
			}
		}
		tab[i][divQuant[i]-1]=i+1;
	}
}

int divQuantity(int n){//returns the quantity of divisors
	if (n==1) return 1;
	int q=1;
	for (int i=2; i<n; i++){
		if (n%i==0) q++;
	}
	return q+1;
}
