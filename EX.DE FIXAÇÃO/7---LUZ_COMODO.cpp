/*-----------------------------------------
	Função: Para cada metro quadrado deve-se usar 18W de potência, receba as dimensões do cômodo mostre a área e a potência de iluminaçâo
	Autor: Nicolas Florencio Alves
	Data de criação: 28/09/2019
	Data de modificação: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float base=0, altura=0, area=0, luz=0;
	printf("A potência é de 18 Watts por metro quadrado\n\n\n");
	printf("Informe a largura do cômodo: ");
	scanf("%f", & base);
	printf("Informe o comprimento do cômodo: ");
	scanf("%f", & altura);
	area=base*altura;
	luz=area*18;
	printf("\n\nEm um cômodo de área de %f metros quadrados a potência de iluminação necessária será de: %f watts\n\n",area,luz);
	system("pause");
}

