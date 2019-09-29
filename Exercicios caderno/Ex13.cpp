/*-----------------------------------------
	Função: Informa se o número digitado está entre 5 e 20, e calcula o cubo dele
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include<iostream>
#include<locale>
int main(){
	setlocale(LC_ALL, "");
	int valor=0,valorCubo=0;
	printf("Informe um número: ");
	scanf("%i", & valor);
	if (valor > 5 & valor < 20){
		valorCubo = valor * valor * valor;
		printf("\nO valor de %i ao cubo é de: %i\n\n",valor,valorCubo);
	}
	else{
		printf("\nO valor não pertence ao intervalo\n\n");
	}
	system("pause");
}
