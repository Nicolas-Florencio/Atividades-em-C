/*-----------------------------------------
	Fun��o: Troca os n�meros de vari�veis
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int a=0, b=0, c=0;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", & a);
	printf("\nInforme o segundo n�mero: ");
	scanf("%i", & b);
	c = a;
	a = b;
	b = c;
	printf("\nOs valores trocados s�o:\n\nPrimeiro n�mero %i \nSegundo n�mero %i\n\n",a, b);
	system("pause");
}
