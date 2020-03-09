#include <iostream>

int main(){
	int n=0;
	std::cin>>n;
	if(n<1) return 0;
	int num[n];
	int **tab;
	tab=new int*[n];
	for(int i=0;i<n;i++) num[i]=i+1;//zapelnianie tablicy liczbami 1 do n
	for(int i=0;i<n;i++) std::cout<<num[i]<<" ";
	std::cout<<std::endl;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++) if (i%j==0) tab[i-1][j-1]=j;//tu sie pojawi dynamika
	}	
	
	return 0;
}