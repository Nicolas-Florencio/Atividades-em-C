/*-----------------------------------------
	Fun��o: M�dia de altura entre duas pessoas recebendo o nome e altura e exibindo a msgm a m�dia entre as alturas de fulano e beltrano � de xx,xx
	Autor: Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	char nome1[40] , nome2[40];
	float altura1=0, altura2=0,media=0;
	printf("Informe o nome da pessoa 1: ");
	scanf("%s", & nome1);
	printf("\nInforme o nome da pessoa 2: ");
	scanf("%s", & nome2);
	// ALTURA PESSOA 1
	printf("\n%s informe sua altura: ", nome1);
	scanf("%f", & altura1);
	// ALTURA PESSOA 2
	printf("\n%s informe sua altura: ", nome2);
	scanf("%f", & altura2);
	media= (altura1+altura2) /2;
	printf("\nA m�dia entre as alturas de %s e %s � %f\n\n", nome1,nome2,media);
	system("pause");
}
