/*-----------------------------------------
	Função: Informa se o número sobra resto ou não
	Autor: Gabriel Cesar Ragonha Rodrigues
	Data de criação: 25/09/2019
	Data de modificação: 25/09/2019
-------------------------------------------*/

#include <locale>
#include <iostream>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, quoc = 0, resto = 0;
	
	printf("Insira o primeiro número: \n");
	scanf("%i", & num1);
	printf("Insira o segundo número: \n");
	scanf("%i", & num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O resto é: %i ", resto);
	system("pause");
}
