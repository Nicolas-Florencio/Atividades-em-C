/*-----------------------------------------
	Função: Informa se o número digitado é negativo ou positivo
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Informe um número: ");
	scanf("%i", & n);
	if(n>=0){
		printf("\nSeu número é positivo\n\n");
	}
	else if(n<0){
		printf("\nSeu número é negativo\n\n");
	}
	system("pause");
}
