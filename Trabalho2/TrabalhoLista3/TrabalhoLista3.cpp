#include <stdio.h>
#include <stdlib.h>

// Aluno: Michel Ribeiro Alves
// Matricula: 04058860
// Turma: 3NMA

int main(){
	int resp = 0, cod_produto[5], escolha,quantidade,pagamento;
	float total;
	char simnao = 's';
	
	while (resp == 0) {
		printf("Loja de Moveis Irineu - Voce gastou e nem percebeu!\n");
		printf("----------------Precos-------------------------\n");
		printf("Sofa 3 lugares R$800.00 [1]\n");
		printf("Guarda Roupa c/vidro R$1000.00 [2]\n");
		printf("Gurda Roupa s/vidro R$650.00 [3]\n");
		printf("Televisão Smart TV 42 polegadas R$1599.00 [4]\n");
		printf("Mesa de jantar R$400.49 [5]\n");
		printf("-----------------------------------------------\n");
		printf("Escolha conforme o numero entre []\n");
		scanf("%d", &escolha);
		while (escolha <= 0) {
			printf("Numero invalido! Escolha conforme o numero entre []\n");
			scanf("%d", &escolha);
		}
		printf("Quantos quer levar?\n");
		scanf("%d", &quantidade);
		while (quantidade <= 0){
			printf("Numero invalido!\n");
			scanf("%d", &quantidade);
		}
		switch (escolha) {
			case 1:
				total += 800 * quantidade;
				break;
			case 2:
				total += 1000.00 * quantidade;
				break;
			case 3:
				total += 650.00 * quantidade;
				break;
			case 4:
				total += 1599.00 * quantidade;
				break;
			case 5:
				total += 400.49 * quantidade;
		}
		fflush(stdin);
		printf("Deseja algo a mais?(s/n)\n");
		scanf(" %c", &simnao);
		if (simnao == 'n') {
			resp = 1;
		}
	}
	
	printf("Valor total das compras R$%.2f\n", total);
	printf("Formas de pagamento:\n");
	printf("Venda a Vista - desconto de 10% [1]\n");
	printf("Venda a Prazo 30 dias - desconto de 5% [2]\n");
	printf("Venda a Prazo 60 dias - mesmo preço [3]\n");
	printf("Venda a Prazo 90 dias - acréscimo de 5% [4]\n");
	printf("Venda com cartão de débito - desconto de 8% [5]\n");
	printf("Venda com cartão de crédito - desconto de 7% [6]\n");
	printf("Escolha uma forma de pagamento escolhendo um dos numeros entre []\n");
	scanf("%d", &pagamento);
	switch (pagamento) {
		case 1:
			total = total - total * 0.1;
			printf("Total a pagar R$%.2f\n", total);
			break;
		case 2:
			total = total - total * 0.05;
			printf("Total a pagar R$%.2f\n", total);
			break;
		case 3:
			printf("Total a pagar R$%.2f\n", total);
			break;
		case 4:
			total = total + total * 0.05;
			printf("Total a pagar R$%.2f\n", total);
			break;
		case 5:
			total = total - total * 0.08;
			printf("Total a pagar R$%.2f\n", total);
			break;
		case 6:
			total = total - total * 0.07;
			printf("Total a pagar R$%.2f\n	", total);
			break;
		
		default:
			printf("Numero invalido! Digite um numero entre []");
	}
	
	system("pause");
}
