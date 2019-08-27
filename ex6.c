#include<stdio.h>
#include<math.h>

int main(){
	
	int i, n, v[4], somadecimal;
	srand(time(NULL));
	
	for(i = 0; i < 4; i++){
		n = rand() % 2;
		v[i] = n;
		printf("%d ", v[i]);
	}
	
	v[0] = v[0] * pow(2, 3);
	v[1] = v[1] * pow(2, 2);
	v[2] = v[2] * pow(2, 1);
	v[3] = v[3] * pow(2, 0);
	
	printf("\n%d %d %d %d", v[0], v[1], v[2], v[3]);
	
	somadecimal = v[0] + v[1] + v[2] + v[3];
	
	printf("\n\n%d", somadecimal);

	
}
