#include <iostream>
#include <math.h>

int divisors(int n, int&tab[][]);
int divQuantity(int n);

int main(){
	int n=0;
	std::cout<<"Podaj N:\n";
	std::cin>>n;
	if(n<1) return 0;
	int num[n];
	for(int i=0; i<n; i++) num[i]=i+1;	
	int **tab;
	tab=new int*[n];	
	std::cout<<"tab first dim. alloc. ... ok"<<std::endl;
	for(int i=0; i<n; i++){
		tab[i]=new int[divQuantity(num[i])];
		std::cout<<"dla i:"<<i+1<<"="<<divQuantity(num[i])<<std::endl;
	}
	delete tab;
	return 0;
}

int divisors(int n, int&tab[][]){
	for (int i=2; i*i<=n; i++){
		if (n%i==0) tab[n-1][i-1]=i;
	}
	return 0;
}

int divQuantity(int n){
	int q=1;
	for (int i=2; i<n; i++){
		if (n%i==0) q++;
	}
	return q+1;
}
