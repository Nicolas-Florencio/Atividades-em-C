/*-----------------------------------------
	Fun��o: Calculo da �rea de um tri�ngulo
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 26/09/2019
	Data de modifica��o: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int base=0, altura=0,area=0;
	printf("Informe a base do tri�ngulo:\n ");
	scanf("%i", & base);
	printf("Informe a altura do tri�ngulo:\n ");
	scanf("%i",& altura);
	area=(base*altura)/2;
	printf("A �rea do tri�ngulo �:%i\n ",area);
	system("pause");
}
