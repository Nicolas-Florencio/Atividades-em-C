/*-----------------------------------------
	Fun��o: Valor de uma presta��o em atraso USANDO: PRESTA�AO= VALOR + (VALOR * (TAXA/100) * TEMPO) 
	Autor: Nicolas Florencio Alves
	Data de cria��o: 27/09/2019
	Data de modifica��o: 27/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int tempo=0;
	float taxa=0,valor, prestacao=0;
	printf("Informe o valor da taxa: ");
	scanf("%f", & taxa);
	printf("Informe o tempo em dias,meses ou anos: ");
	scanf("%i", & tempo);
	printf("Informe o valor da presta��o: ");
	scanf("%f", & valor);
	prestacao=valor+(valor*(taxa/100)*tempo);
	printf("O valor da presta��o com atraso de pagamento �: %f\n",prestacao);
	system("pause");
}
