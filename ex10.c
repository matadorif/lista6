#include<stdio.h>

int main(){
	
	int A[20], n, i, j;
	
	for(i = 0; i < 20; i++){
		n = 97 + rand() % 25;
		A[i] = n;
		printf("%d ", A[i]);
	}
	
	printf("\n");
	
	for(j = 0; j < A[j]; j++){
		printf("%c ", A[j]);
	}
	
}
