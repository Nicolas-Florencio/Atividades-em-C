/*-----------------------------------------
	Fun��o: Informa se o n�mero � par ou �mpar
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0, resto=0, quo=0, divisor=0;
	printf("Informe um n�mero: ");
	scanf("%i", & n);
	quo = n/2;
	resto = n-(2 * quo);
	if (resto > 0){
		printf("\nO n�mero � �mpar\n\n");
	}
	else{
		printf("\nO n�mero � par\n\n");
	}
	system ("pause");
}
