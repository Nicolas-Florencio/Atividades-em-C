/*-----------------------------------------
	Fun��o: Informa a classifica��o do grupo de acordo com a idade
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int id=0;
	printf("Informe sua idade: ");
	scanf("%i", & id);
	if (id >= 5 & id <= 11){
		printf("\nPertenente a classe infantil!\n\n");
	}
	else if (id >= 12 & id <= 17){
		printf("\nPertencente a classe juvenil!\n\n");
	}
	else if (id >= 18){
		printf("\nPertencente a classe adultos!\n\n");
	}
	else{
		printf("\nIdade inv�lida!\n\n");
	}
system ("pause");
}
