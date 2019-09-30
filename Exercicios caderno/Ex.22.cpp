/*-----------------------------------------
	Função: Nome de cada mês do ano pelo número dele
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int cod=0;
	printf("Informe o respectivo número do mês desejado: ");
	scanf("%i", & cod);
	switch(cod){
		case 1 : printf("\nJaneiro\n");
		break;
		case 2 : printf("\nFevereiro\n");
		break;
		case 3 : printf("\nMarço\n");
		break;
		case 4 : printf("\nAbril\n");
		break;
		case 5 : printf("\nMaio\n");
		break;
		case 6 : printf("\nJunho\n");
		break;
		case 7 : printf("\nJulho\n");
		break;
		case 8 : printf("\nAgosto\n");
		break;
		case 9 : printf("\nSetembro\n");
		break;
		case 10 : printf("\nOutubro\n");
		break;
		case 11 : printf("\nNovembro\n");
		break;
		case 12 : printf("\nDezembro\n");
		break;
		default : printf("\nMês inválido\n");
		break;
	}
	system("pause");
}
