/*-----------------------------------------
	Fun��o: Mostra todos os numeros pares entre os dois valores digitados pelo usuario
	Autor: Nicolas Florencio Alves
	Data de cria��o: 05/11/2019
	Data de modifica��o: 05/11/2019
-------------------------------------------*/
#include <iostream>
#include <locale>

int main(){
	setlocale(LC_ALL, "");
	int a=0, b=0, c=0, resto=0, cont=0;
	printf("\nInforme o primeiro n�mero: ");
	scanf("%i", & a);
	printf("\nInforme o segundo n�mero: ");
	scanf("%i", & b);
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	cont=a;
	
	while(cont<=b){
		resto=cont-(cont/2*2);
	
	if(resto==0){
		printf("%i ", cont);
	}
	cont=cont+1;
	}
}
