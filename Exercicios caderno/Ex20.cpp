/*-----------------------------------------
	Fun��o: Informa os dias da semana de acordo com o n�mero dado
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Indique um n�mero entre 1 a 7 para os dias da semana: ");
	scanf("%i", & n);
	switch (n){
		case 1 : printf("\nDomingo\n\n");
		break;
		case 2 : printf("\nSegunda-feira\n\n");
		break;
		case 3 : printf("\nTer�a-feira\n\n");
		break;
		case 4 : printf("\nQuarta-feira\n\n");
		break;
		case 5 : printf("\nQuinta-feira\n\n");
		break;
		case 6 : printf("\nSexta-feira\n\n");
		break;
		case 7 : printf("\nS�bado\n\n");
		break;
		default : printf("\nDia inv�lido\n\n");
		break;
	}
	system ("pause");
}
