/*-----------------------------------------
	Função: Aumento de salário recebendo percentual de aumento 
	Autor: Nicolas Florencio Alves
	Data de criação: 28/09/2019
	Data de modificação: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float salario_old,salario_new,aumento;
	printf("Informe o salário atual: ");
	scanf("%f", & salario_old);
	printf("Informe a porcentagem do aumento: ");
	scanf("%f", & aumento);
	salario_new=salario_old + (salario_old*(aumento/100));
	printf("O salário anterior era %f \ne agora é %f.", salario_old,salario_new);
	system("pause");
}
