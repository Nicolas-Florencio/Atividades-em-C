/*-----------------------------------------
	Fun��o: Reeceber 2 valores reais e realizar a opera��o desejada
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int cod=0;
	float n1=0, n2=0, resul=0;
	printf("Informe o primeiro valor: ");
	scanf("%f", & n1);
	printf("\nInforme o segundo valor: ");
	scanf("%f", & n2);
	printf("\n (1)SOMA\n (2)SUBTRA��O\n (3)MULTIPLICA��O\n (4)DIVIS�O\n");
	printf("Informe a opera��o desejada: ");
	scanf("%i", & cod);
	switch(cod){
		case 1 : resul=n1+n2; printf("\n\nA soma dos valores �: %.2f \n",resul);
		break;
		case 2 : resul=n1-n2; printf("\n\nA subtra��o dos valores �: %.2f \n",resul);
		break;
		case 3 : resul=n1*n2; printf("\n\nA multiplica��o dos valores �: %.2f \n",resul);
		break;
		case 4 : resul=n1/n2; printf("\n\nA divis�o dos valores �: %.2f \n",resul);
		break;
		default : printf("Op��o inv�lida");
		break;
	}
	system("pause");
}
