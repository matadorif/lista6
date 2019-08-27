#include<stdio.h>

int main(){
	
	int i, j, k, v[11], n = -1;
	
	for(i = 10; i <= 20; i++){
		n++;
		v[n] = i;
		printf("%d ", v[n]);
	}
	
	printf("\n");
	
	for(k = v[k]; k >= 0; k--){
		if(v[k] % 2 == 0){
			printf("%d ", v[k]);
		}
	}
	
		
	printf("\n");
	
	for(j = v[j]; j >= 0; j--){
		if(v[j] % 2 != 0){
			printf("%d ", v[j]);
		}
	}
	
	
}
