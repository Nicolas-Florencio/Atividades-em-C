/*-----------------------------------------
	Fun��o: Receber 3 valores e mostrar o quadrado da soma dos n�meros
	Autor: Nicolas Florencio Alves
	Data de cria��o: 27/09/2019
	Data de modifica��o: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int v1=0,v2=0,v3=0,soma=0;
	printf("Informe o primeiro valor: ");
	scanf("%i", & v1);
	printf("Informe o segundo valor: ");
	scanf("%i", & v2);
	printf("Informe o terceiro valor: ");
	scanf("%i", & v3);
	soma= v1+v2+v3;
	soma=soma*soma;
	printf("O quadrado da soma dos 3 n�meros �: %i \n\n\n", soma);
	system("pause");
}
