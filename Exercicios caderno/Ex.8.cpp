/*-----------------------------------------
	Função: Receber 4 notas e mostrar a média
	Autor: Nicolas Florencio Alves
	Data de criação: 28/09/2019
	Data de modificação: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float n1=0,n2=0,n3=0,n4=0,media=0;
	printf("Informe a primeira nota: ");
	scanf("%f", & n1);
	printf("Informe a segunda nota: ");
	scanf("%f", & n2);
	printf("Informe a terceira nota: ");
	scanf("%f", & n3);
	printf("Informe a quarta nota: ");
	scanf("%f", & n4);
	media=(n1+n2+n3+n4)/4;
	printf("A média entre os quatro números é: %f \n",media);
	system("pause");
}
