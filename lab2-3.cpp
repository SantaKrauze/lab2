#include <iostream>
#include <math.h>

void divisors(int n, int**tab, int*divQuant);
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
	std::cout<<"tab first dim. alloc. ... ok"<<std::endl;
	for(int i=0; i<n; i++){//dynamic part two
		divQuant[i]=divQuantity(numbers[i]);//makes an array of divisors quantities (MAD)
		tab[i]=new int[divQuant[i]];
		std::cout<<"dla i:"<<i+1<<"="<<divQuant[i]<<std::endl;
	}
	divisors(n,tab,divQuant);
	print(tab,n,divQuant);
	//delete tab;
	return 0;
}

void print(int**tab, int n, int*divQuant){
	for(int i=0; i<n; i++){
		for(int j=0; j<divQuant[i]; j++){
			std::cout<<"tab["<<i<<"]["<<j<<"]="<<tab[i][j]<<std::endl;}
	}
}

void divisors(int n, int**tab, int*divQuant){//returns the divisprs
	tab[n-1][0]=n;
	for (int i=1; i*i<=n; i++){
		if (n%i==0){
			tab[n-1][i-1]=i;
			std::cout<<n<<":"<<i<<"ok\n";
		}
		else std::cout<<n<<":"<<i<<"not ok\n";
	}
}

int divQuantity(int n){//returns the quantity of divisors
	int q=1;
	for (int i=2; i<n; i++){
		if (n%i==0) q++;
	}
	return q+1;
}
