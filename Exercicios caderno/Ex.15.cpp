/*-----------------------------------------
	Fun��o: Informa qual n�mero digitado entre tr�s � maior
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include<iostream>
#include<locale>
int main(){
	setlocale(LC_ALL, "");
	int n1=0, n2=0, n3=0, maior=0;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", & n1);
	printf("\nInforme o segundo n�mero: ");
	scanf("%i", & n2);
	printf("\nInforme o terceiro n�mero: ");
	scanf("%i", & n3);
	if (n1 > n2 & n1 > n3){
		maior = n1;
		printf("\nO maior n�mero �: %i\n\n",n1);
	}
	else if (n2 > n1 & n2 > n3){
		maior = n2;
		printf("\nO maior n�mero �: %i\n\n",n2);
	}
	else if (n3 > n1 & n3 > n2){
		maior = n3;
		printf("\nO maior n�mero �: %i\n\n",n3);
	}
	else{
		printf("\nOs n�meros s�o iguais!\n\n");
	}
	system("pause");
}
