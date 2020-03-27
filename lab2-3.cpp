#include <iostream>
#include <math.h>

void divisors(int**tab,int n,int*numbers, int*divQuant);
int divQuantity(int n);
void print(int**tab, int n, int*divQuant);

int main(){
	int n=0;
	std::cout<<"Podaj N:\n";
	std::cin>>n;
	if(n<1) return 0;
	int numbers[n];//holds all the nums from 1-n
	int divQuant[n];
	for(int i=0; i<n; i++) numbers[i]=i+1;	
	int **tab;
	tab=new int*[n];//dynamic part one
	//std::cout<<"tab first dim. alloc. ... ok"<<std::endl;
	for(int i=0; i<n; i++){//dynamic part two
		divQuant[i]=divQuantity(numbers[i]);//makes an array of divisors quantities (MAD)
		tab[i]=new int[divQuant[i]];
		//std::cout<<"dla i:"<<i+1<<"="<<divQuant[i]<<std::endl;
	}
	divisors(tab,n,numbers,divQuant);
	print(tab,n,divQuant);
	//delete tab;
	return 0;
}

void print(int**tab, int n, int*divQuant){
	for(int i=0; i<n; i++){
		for(int j=0; j<divQuant[i]; j++){
			//std::cout<<"tab["<<i<<"]["<<j<<"]="<<tab[i][j]<<std::endl;
			std::cout<<tab[i][j]<<"   ";
		}
		std::cout<<std::endl;
	}
}

void divisors(int**tab,int n,int*numbers, int*divQuant){//fills the table with divisors
	//tab[n-1][0]=1;
	int j;
	for(int i=0; i<n; i++){
		for(j=0; j<divQuant[i]; j++){
			if ((i+1)%(j+1)==0){
				tab[i][j]=j+1;
				//std::cout<<n<<":"<<j<<"ok\n";
			}
			//else std::cout<<n<<":"<<j<<"not ok\n";
		}
		tab[i][divQuant[i]-1]=i+1;
	}
}

int divQuantity(int n){//returns the quantity of divisors
	int q=1;
	for (int i=2; i<n; i++){
		if (n%i==0) q++;
	}
	return q+1;
}
