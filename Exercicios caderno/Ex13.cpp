/*-----------------------------------------
	Fun��o: Informa se o n�mero digitado est� entre 5 e 20, e calcula o cubo dele
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include<iostream>
#include<locale>
int main(){
	setlocale(LC_ALL, "");
	int valor=0,valorCubo=0;
	printf("Informe um n�mero: ");
	scanf("%i", & valor);
	if (valor > 5 & valor < 20){
		valorCubo = valor * valor * valor;
		printf("\nO valor de %i ao cubo � de: %i\n\n",valor,valorCubo);
	}
	else{
		printf("\nO valor n�o pertence ao intervalo\n\n");
	}
	system("pause");
}
