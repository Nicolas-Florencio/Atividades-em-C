/*-----------------------------------------
	Fun��o: Para cada metro quadrado deve-se usar 18W de pot�ncia, receba as dimens�es do c�modo mostre a �rea e a pot�ncia de ilumina��o
	Autor: Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float base=0, altura=0, area=0, luz=0;
	printf("A pot�ncia � de 18 Watts por metro quadrado\n\n\n");
	printf("Informe a largura do c�modo: ");
	scanf("%f", & base);
	printf("Informe o comprimento do c�modo: ");
	scanf("%f", & altura);
	area=base*altura;
	luz=area*18;
	printf("\n\nEm um c�modo de �rea de %f metros quadrados a pot�ncia de ilumina��o necess�ria ser� de: %f watts\n\n",area,luz);
	system("pause");
}

