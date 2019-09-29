 /*-----------------------------------------
	Função: Calcula se o número é maior ou menor que 100 se for maior que 100 ele recebe 150
	Autores: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main (){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Informe um número: ");
	scanf("%i",& n);
	if(n>100){
		n=n+150;
		printf("\nO número é maior que 100 então ele recebe 150, logo se torna: %i\n\n",n);
	}
	else if(n<100){
		printf("\nO número é menor que 100 então não receberá 150\n\n");
	}
	if (n==100){
		printf("\nO número é igual a 100 logo não receberá 150\n\n");
	}
	system("pause");
}
