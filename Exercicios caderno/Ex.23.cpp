/*-----------------------------------------
	Fun��o: Nome de cada m�s do ano pelo n�mero dele e a quantidade de dias em cada um
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int cod=0;
	printf("Informe o respectivo n�mero do m�s desejado: ");
	scanf("%i", & cod);
	switch(cod){
		case 1 : printf("\nJaneiro - 31 dias\n");
		break;
		case 2 : printf("\nFevereiro - 30 dias\n");
		break;
		case 3 : printf("\nMar�o - 31 dias\n");
		break;
		case 4 : printf("\nAbril - 30 dias\n");
		break;
		case 5 : printf("\nMaio - 31 dias\n");
		break;
		case 6 : printf("\nJunho - 30 dias\n");
		break;
		case 7 : printf("\nJulho - 31 dias\n");
		break;
		case 8 : printf("\nAgosto - 31 dias\n");
		break;
		case 9 : printf("\nSetembro - 30 dias\n");
		break;
		case 10 : printf("\nOutubro - 31 dias\n");
		break;
		case 11 : printf("\nNovembro - 30 dias\n");
		break;
		case 12 : printf("\nDezembro - 31 dias\n");
		break;
		default : printf("\nM�s inv�lido\n");
		break;
	}
	system("pause");
}
