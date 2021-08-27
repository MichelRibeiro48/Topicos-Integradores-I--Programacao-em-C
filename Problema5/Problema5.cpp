#include <stdio.h>
#include <stdlib.h>

int main(){
	int sacaflex, sacapremium, sacagold;
	float valorflex, valorpremium, valorgold, valortotal, descontototal;
	
	valorflex = 10.00;
	valorpremium = 25.00;
	valorgold = 50.00;
	
	printf("Informe a quantidade de saco de racoes flex:\n");
	scanf("%d", &sacaflex);
	printf("Informe a quantidade de saco de racoes premium:\n");
	scanf("%d", &sacapremium);
	printf("Informe a quantidade de saco de racoes gold:\n");
	scanf("%d", &sacagold);
		
	printf("Quantidade de racoes flex: %d\n", sacaflex);
	printf("Quantidade de racoes premium: %d\n", sacapremium);
	printf("Quantidade de racoes gold: %d\n", sacagold);
	
	valortotal = valorflex * sacaflex + valorpremium * sacapremium + valorgold * sacagold;
	descontototal = (valorflex - 1) * sacaflex + (valorpremium - 5) * sacapremium + (valorgold - 15) * sacagold;
	
	printf("=====================\n");
	printf("Valor descontado = %.2f\n", valortotal - descontototal);
	printf("Valor a pagar = %.2f\n", descontototal - (valorflex * 0.1 + valorpremium * 0.2 + valorgold * 0.3));

	system("pause");
}
