/*-----------------------------------------
	Função: Reeceber 2 valores reais e realizar a operação desejada
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
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
	printf("\n (1)SOMA\n (2)SUBTRAÇÃO\n (3)MULTIPLICAÇÃO\n (4)DIVISÃO\n");
	printf("Informe a operação desejada: ");
	scanf("%i", & cod);
	switch(cod){
		case 1 : resul=n1+n2; printf("\n\nA soma dos valores é: %.2f \n",resul);
		break;
		case 2 : resul=n1-n2; printf("\n\nA subtração dos valores é: %.2f \n",resul);
		break;
		case 3 : resul=n1*n2; printf("\n\nA multiplicação dos valores é: %.2f \n",resul);
		break;
		case 4 : resul=n1/n2; printf("\n\nA divisão dos valores é: %.2f \n",resul);
		break;
		default : printf("Opção inválida");
		break;
	}
	system("pause");
}
