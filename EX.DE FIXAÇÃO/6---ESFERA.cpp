/*-----------------------------------------
	Fun��o: Ler raio de um esfera e exibir o comprimento( C=2*pi*R ), �rea( A=pi*(R*R) ), Volume( V=(3/4)*pi*(R*R*R)
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float raio=0, comprimento=0, area=0, volume=0, pi=3.14;
	printf("Informe o raio da esfera: ");
	scanf("%f", & raio);
	printf("\nPi ser� adotado como 3,14.\n\n");
	comprimento= 2*pi*raio;
	area= pi * (raio*raio);
	volume= 4*pi*(raio*raio*raio) /3;
	printf("\nO comprimento da esfera �: %f\nA �rea �: %f\nO volume �: %f\n",comprimento,area,volume);
	system("pause");
}
