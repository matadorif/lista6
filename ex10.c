#include<stdio.h>

int main(){
	
	int A[20], n, i, j;
	
	for(i = 0; i < 20; i++){
		n = 97 + rand() % 25;
		A[i] = n;
		printf("%d\t%c\n", A[i], A[i]);
	}
	
}
