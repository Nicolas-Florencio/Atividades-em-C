/*-----------------------------------------
	Função: Exiba quociente e resto da divisão
	Autor: Nicolas Florencio Alves
	Data de criação: 28/09/2019
	Data de modificação: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int dividendo=0,divisor=0,resto=0,quociente=0;
	printf("Informe o dividendo: ");
	scanf("%i", & dividendo);
	printf("informe o divisor: ");
	scanf("%i", & divisor);
	quociente = dividendo/divisor;
	resto = (quociente*divisor)-dividendo;
	printf("\nO quociente da divisão entre %i e %i é: %i\n\n", dividendo,divisor,quociente);
	printf("O resto da divisão entre %i e %i é: %i\n\n", dividendo,divisor,resto);
	system("pause");
}
