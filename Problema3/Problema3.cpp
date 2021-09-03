#include <stdio.h>
#include <stdlib.h>

int main(){
	float conta;
	int joao, rodrigo, ricardo;
	
	printf("Informe a conta a ser dividida:\n");
	scanf("%f", &conta);
	
	ricardo = int(conta);
	joao = (int)conta;
	rodrigo = (int)conta;
	conta -= ricardo;
	printf("Valor do joao a pagar = %d | Valor do rodrigo a pagar = %d | Valor do ricardo a pagar = %.2f\n", joao / 3, rodrigo / 3,  (ricardo / 3) + conta);
	
	system("pause");
}
