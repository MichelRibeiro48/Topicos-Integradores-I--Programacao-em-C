#include <stdio.h>
#include <stdlib.h>

// aluno : Michel Ribeiro Alves
// Matricula: 04058860
// Turma: BCC-3NMA
int main(){
	float vendas, salario;
	
	salario = 3300.00;
	
	printf("Informe a quantidade de produtos vendidos:\n");
	scanf("%f", &vendas);
		
	if (vendas > 0) {
		printf("Salario a receber = %.2f\n", salario + (vendas * 10) + ((vendas * 10) * 0.03));
	}
	else if (vendas <= 0) {
		printf("Salario a receber = %.2f\n", salario);
	}

	system("pause");
}
