/*-----------------------------------------
	Função: Ler e mostrar 50 nomes
	Autor: Nicolas Florencio Alves
<<<<<<< HEAD
	Data de cria��o: 29/09/2019
	Data de modifica��o: 30/09/2019
=======
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
>>>>>>> 13be4b36ad5aee4666cd0b08f31517ca04a806b8
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	char nome[40];
	int p=1;
	while (p<=50){
		printf("\nNome %i: ",p);
		scanf("%s", & nome);
		p=p+1;
		printf(nome,"\n");
	}
<<<<<<< HEAD
	system("pause");
=======
>>>>>>> 13be4b36ad5aee4666cd0b08f31517ca04a806b8
}
