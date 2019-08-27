#include<stdio.h>

int main(){
	
	int i, n = 0, v[8], soma30 = 0, somatotal = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < 8; i++){
		n = rand() % 50;
		v[i] = n;
		printf("%d ", v[i]);
		somatotal = somatotal + v[i];
		
		if(v[i] > 30){
			soma30 = soma30 + v[i];
		}
		
	}
	
	printf("\nSoma dos numeros maiores que 30: %d\n", soma30);
	printf("Soma total do vetor: %d", somatotal);
	
}
