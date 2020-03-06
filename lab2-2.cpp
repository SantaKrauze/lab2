#include <iostream>

int main(){
	int N=0;
	std::cin>>N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=10; j++){
			std::cout<<i*j<<std::endl;
		}	
	}
}
