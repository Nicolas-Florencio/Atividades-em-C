/*-----------------------------------------
	Fun��o: Mostrar a m�dia ponderada de 4 notas media = ((n1*peso1) + (n2*peso2) + (n3*peso3) + (n4*peso4)) / ((peso1+peso2+peso3+peso4));
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){	
	setlocale(LC_ALL, "PORTUGUESE");
	float n1=0 , n2=0 ,n3=0 , n4=0 , peso1=0 , peso2=0 , peso3=0 , peso4=0 , media=0;
	
	/*PRIMEIRA NOTA E PESO*/
	
	printf("Informe a primeira nota: ");
	scanf("%f", & n1);
	printf("\nInforme o valor do peso 1: ");
	scanf("%f", & peso1);
	
	/*SEGUNDA NOTA E PESO*/
	
	printf("\nInforme a segunda nota: ");
	scanf("%f", & n2);
	printf("\nInforme o valor do peso 2: ");
	scanf("%f", & peso2);
	
	/*TERCEIRA NOTA E PESO*/
	
	printf("\nInforme a terceira nota: ");
	scanf("%f", & n3);
	printf("\nInforme o valor do peso 3: ");
	scanf("%f", & peso3);
	
	/*QUARTA NOTA E PESO*/
	
	printf("\nInforme a quarta nota: ");
	scanf("%f", & n4);
	printf("\nInforme o valor do peso 4: ");
	scanf("%f", & peso4);
	media = ((n1*peso1) + (n2*peso2) + (n3*peso3) + (n4*peso4)) / ((peso1+peso2+peso3+peso4));
	printf("\nA m�dia ponderada das 4 notas �: %f\n ",media);
	system("pause");
}
