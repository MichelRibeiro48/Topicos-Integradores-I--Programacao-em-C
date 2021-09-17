#include <stdio.h>
#include <stdlib.h>

// Aluno: Michel Ribeiro Alves
// Matricula: 04058860
// Turma: 3NMA

int main(){
	int i = 0, resposta = 0;
	float valor, valormedio,valortotal;
	char respostac;
	
	while (resposta == 0) {
		i++;
		printf("Digite o valor da mercadoria\n");
		scanf("%f", &valor);
		valortotal += valor;
		fflush(stdin); // que tristeza é o C prof rodrigo :D
		printf("Existe mais mercadorias no estoque?(s/n)\n");
		scanf(" %c", &respostac);
		if (respostac == 'n') {
			resposta = 1;
		}
		
	}
	
	printf("Valor total: %.2f\n", valortotal);
	printf("Valor medio das mercadorias: %.2f", valortotal / i);
}
