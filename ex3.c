#include<stdio.h>

int main(){
	
	int i, j, k, l, nA = -1, nB = -1, A[10], B[10], R[10], soma = 0;
	
	for(i = 2; i <= 20; i++){
		if(i % 2 == 0){
			nA++;
			A[nA] = i;
			printf("%d ", A[nA]);
		}
	}
	
	printf("\n");
	
	for(j = 10; j <= 19; j++){
		nB++;
		B[nB] = j;
		printf("%d ", B[nB]);
	}
	printf("\n\n");
	
	for(k = 0; k < A[k]; k++){
		soma = soma + (A[k-1] + B[k-1]);
		printf("%d + %d / ", A[k], B[k]);
	}
	
	printf("\n");
	printf("%d", soma);
	
}
