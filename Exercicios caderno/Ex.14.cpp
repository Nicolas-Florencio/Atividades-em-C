/*-----------------------------------------
	Função: Informa qual dos 2 números digitado é maior
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n1=0, n2=0;
	printf("Informe o primeiro número: ");
	scanf("%i", & n1);
	printf("\nInforme o segundo número: ");
	scanf("%i", & n2);
	if(n1 > n2){
		printf("\nO maior número é: %i\n\n",n1);
	}
	else if(n2 > n1){
		printf("\nO maior número é: %i\n\n",n2);
	}
	else{
		printf("\nOs números são iguais!\n\n");
	}
	system("pause");
}
