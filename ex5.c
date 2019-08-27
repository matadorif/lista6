#include<stdio.h>

int main(){
	
	int i, n, v[4];
	srand(time(NULL));
	
	for(i = 0; i < 4; i++){
		n = rand() % 2;
		v[i] = n;
		printf("%d ", v[i]);
		
	}
}
