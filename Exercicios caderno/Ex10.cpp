 /*-----------------------------------------
	Fun��o: Calcula se o n�mero � maior ou menor que 100 se for maior que 100 ele recebe 150
	Autores: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main (){
	setlocale(LC_ALL, "");
	int n=0;
	printf("Informe um n�mero: ");
	scanf("%i",& n);
	if(n>100){
		n=n+150;
		printf("\nO n�mero � maior que 100 ent�o ele recebe 150, logo se torna: %i\n\n",n);
	}
	else if(n<100){
		printf("\nO n�mero � menor que 100 ent�o n�o receber� 150\n\n");
	}
	if (n==100){
		printf("\nO n�mero � igual a 100 logo n�o receber� 150\n\n");
	}
	system("pause");
}
