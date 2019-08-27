#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	int i, n, op, v[4], acertos = 0, erros = 0, somadecimal;
	
	while(erros < 3){
		for(i = 0; i < 4; i++){
			n = rand() % 2;
			v[i] = n;
			printf("%d ", v[i]);
					
		}
		
		printf("\n");
		
		v[0] = v[0] * pow(2, 3);
		v[1] = v[1] * pow(2, 2);
		v[2] = v[2] * pow(2, 1);
		v[3] = v[3] * pow(2, 0);
			
		somadecimal = v[0] + v[1] + v[2] + v[3];
		
		printf("Qual é o valor do número em decimal? ");
		scanf("%d", &op);
		
		if(op == somadecimal){
			printf("Você acertou! Parabéns!");
			acertos++;
		}else{
			printf("Você errou! Pense mais da próxima vez!");
			erros++;
		}
		
		printf("\t");
		printf("Acertos: %d\tErros: %d", acertos, erros);
		printf("\n");
	}
	
	
}
