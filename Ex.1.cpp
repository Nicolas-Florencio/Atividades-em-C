 /*-----------------------------------------
	Fun��o: Calculo de �rea de ret�ngulo
	Autor: Gabriel Cesar Ragonha Rodrigues, Nicolas Florencio Alves
	Data de cria��o: 26/09/2019
	Data de modifica��o: 27/09/2019
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
	printf("A �rea �:",area);
	system("pause");
}
