#include <stdio.h>
#include <stdlib.h>

int main(){
	int escolha,conta;
	float saldo,vOperacao,cheque,saldonovo;
	
	cheque = 2000.00;
	
	printf("Informe o numero da conta:\n");
	scanf("%d", &conta);
	printf("Informe o saldo:\n");
	scanf("%f", &saldo);
	printf("Digite 1 para depositar ou 2 para sacar:\n");
	scanf("%d", &escolha);
	
	if (escolha == 1) {
		printf("Informe quanto ira depositar:\n");
		scanf("%f", &vOperacao);
		
		saldo = saldo + vOperacao;
		printf("Novo saldo = %.2f\n", saldo);
	}
	else if (escolha == 2) {
		printf("Informe quanto ira sacar:\n");
		scanf("%f", &vOperacao);
		
		if (vOperacao > saldo) {
			saldonovo = vOperacao - saldo;
			saldonovo = cheque - saldonovo;
			printf("Voce ficou negativo portanto usamos seu cheque especial, Saldo do cheque especial = %.2f\n", saldonovo);
		}
		else {
			saldo -= vOperacao;
			printf("Novo saldo = %.2f\n", saldo);
		}
	}
	system("pause");
}
