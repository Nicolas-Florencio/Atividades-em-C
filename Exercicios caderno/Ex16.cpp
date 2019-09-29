/*-----------------------------------------
	Função: Informa a ordem crescente de 3 números
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include<iostream>
#include<locale>
int main(){
	setlocale(LC_ALL, "");
	int n1=0, n2=0, n3=0;
	printf("Informe o primeiro número: ");
	scanf("%i",& n1);
	printf("\nInforme o segundo número: ");
	scanf("%i",& n2);
	printf("\nInforme o terceiro número: ");
	scanf("%i",& n3);
	if (n1 <= n2 & n2 <= n3){
		printf("\nA ordem crescente é : %i %i %i\n\n",n1,n2,n3);
	}
	else if (n2 <= n1 & n1 <= n3){
		printf("\nA ordem crescente é : %i %i %i\n\n",n2,n1,n3);
	}
	else if (n3 <= n1 & n1 <= n2){
		printf("\nA ordem crescente é : %i %i %i\n\n",n3,n1,n2);
	}
	else if (n1 <= n3 & n3 <= n2){
		printf("\nA ordem crescente é : %i %i %i\n\n",n1,n3,n1);
	}
	else if (n2 <= n3 & n3 <= n1){
		printf("\nA ordem crescente é : %i %i %i\n\n",n2,n3,n1);
	}
	else if (n3 <= n2 & n2 <= n1){
		printf("\nA ordem crescente é : %i %i %i\n\n",n3,n2,n1);
	}
	system ("pause");
}
