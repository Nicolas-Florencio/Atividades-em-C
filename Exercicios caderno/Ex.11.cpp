/*-----------------------------------------
	Função: Troca os números de variáveis
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int a=0, b=0, c=0;
	printf("Informe o primeiro número: ");
	scanf("%i", & a);
	printf("\nInforme o segundo número: ");
	scanf("%i", & b);
	c = a;
	a = b;
	b = c;
	printf("\nOs valores trocados são:\n\nPrimeiro número %i \nSegundo número %i\n\n",a, b);
	system("pause");
}
