/*-----------------------------------------
	Fun��o: Informa se o n�mero digitado � negativo ou positivo
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Informe um n�mero: ");
	scanf("%i", & n);
	if(n>=0){
		printf("\nSeu n�mero � positivo\n\n");
	}
	else if(n<0){
		printf("\nSeu n�mero � negativo\n\n");
	}
	system("pause");
}
