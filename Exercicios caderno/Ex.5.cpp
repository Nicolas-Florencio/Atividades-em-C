/*-----------------------------------------
	Função: Calcular o preço da venda de um terreno retangular, recebendo frente e lado e recendo o valor do metro quadrado 
	Autor: Nicolas Florencio Alves
	Data de criação: 27/09/2019
	Data de modificação: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int base=0, altura=0,area=0; 
	float terreno=0, valor=0;
	printf("Informe a largura do terreno: ");
	scanf("%i", & base);
	printf("Informe o comprimento do terreno: ");
	scanf("%i", & altura);
	printf("Informe o valor do metro quadrado do terreno: ");
	scanf("%f", & terreno);
	area=altura*base;
	valor=terreno*area;
	printf("O valor do terreno é:%i \n ", area);
	system("pause");
}
