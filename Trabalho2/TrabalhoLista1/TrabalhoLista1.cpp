#include <stdio.h>
#include<stdlib.h>

// Aluno: Michel Ribeiro Alves
// Matricula: 04058860
// Turma: 3NMA

int main (){
	int qtd_funcionarios = 0;
	float salario[qtd_funcionarios], salarioliquido,salariobruto;
	int horario[qtd_funcionarios], horarioextra;
	
	printf("Digite a quantidade de funcionarios:\n");
	scanf("%d", &qtd_funcionarios);
	
	for (int i = 0; i < qtd_funcionarios; i++){
		printf("Quantas horas o funcionario %d trabalhou?\n", i+1);
		scanf("%d", &horario[i]);
	}
	for (int i = 0; i < qtd_funcionarios; i++){
		salariobruto = horario[i] * 10.00;
		salarioliquido = salariobruto - (salariobruto * 0.1);
		if (horario[i] > 8) {
			horarioextra = horario[i] - 8;
			salariobruto = (horario[i] - horarioextra) * 10.00 + horarioextra * 15.00;
			salarioliquido = salariobruto - (salariobruto * 0.1);
			printf("Horaio extra aplicado! Funcionario: %d | Salario bruto: %.2f | Salario liquido: %.2f\n", i+1, salariobruto, salarioliquido);
		}
		else {
			printf("Funcionario: %d | Salario bruto: %.2f | Salario liquido: %.2f\n", i+1, salariobruto, salarioliquido);
		}
		printf("\n");
	}
	system("pause");
	
}
