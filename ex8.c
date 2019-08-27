#include<stdio.h>
#include<math.h>

int main(){
	
	int j, n, v[5], i, v3[5];
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		n = rand() % 10;
		v[i] = n;
		printf("%d ", v[i]);
		
		v3[i] = pow(v[i], 3);
	}
	
	printf("\n");
	
	for(j = 0; j < v3[j]; j++){
		printf("%d ", v3[j]);
	}
	
}
