/*-----------------------------------------
	Função: Informa a soma de dois números
	Autor: Gabriel Cesar Ragonha Rodrigues
	Data de criação: 25/09/2019
	Data de modificação: 25/09/2019
-------------------------------------------*/

#include <iostream>
#include <locale>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, soma = 0;
	
	printf("Informe um número inteiro: \n");
	//leia (num1);
	scanf("%i", & num1);
	printf("Informe o segundo número inteiro: \n");
	//leia (num2);
	scanf("%i", & num2);
	soma = num1 + num2;
	printf ("Soma: %i + %i = %i \n\n\n" ,num1 ,num2, soma);
	system("pause");
}
