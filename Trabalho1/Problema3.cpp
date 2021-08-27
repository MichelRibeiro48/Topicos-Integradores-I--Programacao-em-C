#include <stdio.h>
#include <stdlib.h>

int main(){
	float ricardo, conta;
	int joao, rodrigo;
	
	printf("Informe a conta a ser dividida:\n");
	scanf("%f", &conta);
		
	joao = (int)conta;
	rodrigo = (int)conta;
	printf("Valor do joao a pagar = %d | Valor do rodrigo a pagar = %d | Valor do ricardo a pagar = %.2f\n", joao / 3, rodrigo / 3, conta / 3);
	
	system("pause");
}
