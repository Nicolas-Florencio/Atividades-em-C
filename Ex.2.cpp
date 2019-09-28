/*-----------------------------------------
	Função: Calculo da área de um triângulo
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de criação: 26/09/2019
	Data de modificação: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int base=0, altura=0,area=0;
	printf("Informe a base do triângulo:\n ");
	scanf("%i", & base);
	printf("Informe a altura do triângulo:\n ");
	scanf("%i",& altura);
	area=(base*altura)/2;
	printf("A área do triângulo é:%i\n ",area);
	system("pause");
}
