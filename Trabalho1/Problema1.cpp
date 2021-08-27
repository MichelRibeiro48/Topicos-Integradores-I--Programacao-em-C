#include <stdio.h>
#include <stdlib.h>

int main(){
	float preco;
	
	printf("Informe o preco do produto:\n");
	scanf("%f", &preco);
	
	if (preco <= 0) {
		printf("valor precisa ser maior que 0!\n");
	}
	else if (preco < 90) {
		printf("Desconto de 10 porcento aplicado | Valor atual = %.2f\n", preco - (preco * 10 / 100));
	}
	else if (preco > 90 && preco < 150) {
		printf("Desconto de 15 porcento aplicado | Valor atual = %.2f\n", preco - (preco * 15 / 100));
	}
	else if (preco > 150) {
		printf("Desconto de 25 porcento aplicado | Valor atual = %.2f\n", preco - (preco * 25 / 100));
	}
	
	system("pause");
}
