/*-----------------------------------------
	Fun��o: Calculo da �rea de um c�rculo
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 26/09/2019
	Data de modifica��o: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int pi=3.14;
	int area=0,raio=0;
	printf("Informe o raio do c�rculo: \n");
	scanf("%i", & raio);
	area=pi*(raio*raio);
	printf("A �rea do c�rculo �: %i\n", area);
	system("pause");
;}
