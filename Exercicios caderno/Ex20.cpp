/*-----------------------------------------
	Função: Informa os dias da semana de acordo com o número dado
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Indique um número entre 1 a 7 para os dias da semana: ");
	scanf("%i", & n);
	switch (n){
		case 1 : printf("\nDomingo\n\n");
		break;
		case 2 : printf("\nSegunda-feira\n\n");
		break;
		case 3 : printf("\nTerça-feira\n\n");
		break;
		case 4 : printf("\nQuarta-feira\n\n");
		break;
		case 5 : printf("\nQuinta-feira\n\n");
		break;
		case 6 : printf("\nSexta-feira\n\n");
		break;
		case 7 : printf("\nSábado\n\n");
		break;
		default : printf("\nDia inválido\n\n");
		break;
	}
	system ("pause");
}
