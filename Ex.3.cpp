/*-----------------------------------------
	Função: Calculo da área de um círculo
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de criação: 26/09/2019
	Data de modificação: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int pi=3.14;
	int area=0,raio=0;
	printf("Informe o raio do círculo: \n");
	scanf("%i", & raio);
	area=pi*(raio*raio);
	printf("A área do círculo é: %i\n", area);
	system("pause");
;}
