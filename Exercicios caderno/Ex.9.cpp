/*-----------------------------------------
	Fun��o: Exiba quociente e resto da divis�o
	Autor: Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
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
	printf("\nO quociente da divis�o entre %i e %i �: %i\n\n", dividendo,divisor,quociente);
	printf("O resto da divis�o entre %i e %i �: %i\n\n", dividendo,divisor,resto);
	system("pause");
}
