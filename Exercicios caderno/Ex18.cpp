/*-----------------------------------------
	Fun��o: Informa se o aluno foi aprovado ou reprovado
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	char nome[40];
	float media;
	printf("Informe o nome do aluno: ");
	scanf("%s", & nome);
	printf("\nInforme a m�dia do aluno: ");
	scanf("%f", & media);
	if (media >= 7){
		printf("\nO aluno %s foi aprovado!\n\n",nome);
	}
	else{
		printf("\nO aluno %s foi reprovado!\n\n",nome);
	}
	system ("pause");
}
