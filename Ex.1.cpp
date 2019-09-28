 /*-----------------------------------------
	Função: Calculo de área de retângulo
	Autor: Gabriel Cesar Ragonha Rodrigues, Nicolas Florencio Alves
	Data de criação: 26/09/2019
	Data de modificação: 27/09/2019
-------------------------------------------*/
#include<iostream>
#include<locale>
int main(){
	setlocale(LC_ALL, "");
	int base=0, altura=0,area=0;
	printf("Informe a base: \n ");
	scanf("%i",& base);
	printf("Informe a altura: \n ");
	scanf("%i",& altura);
	area=base*altura;
	printf("A área é:",area);
	system("pause");
}
