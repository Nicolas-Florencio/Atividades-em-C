/*-----------------------------------------
	Fun��o: Ler e mostrar 50 nomes
	Autor: Nicolas Florencio Alves
	Data de cria��o: 29/09/2019
	Data de modifica��o: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	char nome[40];
	int p=1;
	while (p<=2){
		printf("\nNome %i: ",p);
		scanf("%s", & nome);
		p=p+1;
		
	}
	printf(nome,"\n");
}
