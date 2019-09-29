/*-----------------------------------------
	Função: Informa se o número é par ou ímpar
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0, resto=0, quo=0, divisor=0;
	printf("Informe um número: ");
	scanf("%i", & n);
	quo = n/2;
	resto = n-(2 * quo);
	if (resto > 0){
		printf("\nO número é ímpar\n\n");
	}
	else{
		printf("\nO número é par\n\n");
	}
	system ("pause");
}
