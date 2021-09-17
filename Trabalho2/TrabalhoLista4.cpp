#include <stdio.h>
#include <stdlib.h>

// Aluno: Michel Ribeiro Alves
// Matricula: 04058860
// Turma: 3NMA

int main(){
	int funcionarios = 0, matricula[funcionarios], matricula_alta[1], matricula_baixa[1];
	float salario[funcionarios], salario_alto[1], salario_baixo[1],salariototal;
	printf("Digite a quantidade de funcionarios:\n");
	scanf("%d", &funcionarios);
	
	for (int i = 0; i < funcionarios; i++) {
		printf("Digite a matricula do funcionario %d\n", i+1);
		scanf("%d", &matricula[i]);
		printf("Digite o salario do funcionario %d\n", i+1);
		scanf("%f", &salario[i]);
	}
	
	
	for (int j = 1; j < funcionarios ; j++) {
		int i = 0;
		if (salario[i] > salario[j]) {
			salario_alto[1] = salario[i];
			matricula_alta[1] = matricula[i];
		}
		else if (salario[i] < salario[j]) {
			i = j;
			salario_alto[1] = salario[i];
			matricula_alta[1] = matricula[i];
		}
	}
	
	for (int j = 1; j < funcionarios ; j++) {
		int i = 0;
		if (salario[i] > salario[j]) {
			i = j;
			salario_baixo[1] = salario[i];
			matricula_baixa[1] = matricula[i];
		}
	}
		
	for (int i = 0; i < funcionarios; i++) {
		salariototal += salario[i];
	}
	
	
	printf("Media dos salarios: %.2f\n", salariototal / funcionarios);
	printf("Matricula com Salario mais alto:%d\n", matricula_alta[1]);
	printf("Valor do Salario mais alto:R$%.2f\n", salario_alto[1]);
    printf("Matricula com Salario mais baixo:%d\n", matricula_baixa[1]);
	printf("Valor do Salario mais baixo:R$%.2f\n", salario_baixo[1]);
	

	
	system("pause");
}
