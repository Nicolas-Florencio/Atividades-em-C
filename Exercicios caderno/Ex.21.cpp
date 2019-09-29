/*-----------------------------------------
	Função: Nome e preço de pedido de acordo com a opção escolhida
	Autor: Nicolas Florencio Alves
	Data de criação: 29/09/2019
	Data de modificação: 29/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "");
	int cod=0,quant=0;
	printf("As opções são: \nCachorro quente (1)\nX-salada (2)\nX-burguer (7)\nX-tudo (15)\nQual seu pedido? ");
	scanf("%i", & cod);
	printf("\nInforme a quantidade desejada: ");
	scanf("%i", & quant);
	switch (cod){
	case 1 : printf("\nO pedido foi (%i) Cachorro quente , que custa(m) R$3,50 a unidade\n\n",quant);
	break;
	case 2 : printf("\nO pedido foi (%i) X-salada , que custa(m) R$5,00 a unidade\n\n",quant);
	break;
	case 7 : printf("\nO pedido foi (%i) X-burguer , que custa R$8,90 a unidade\n\n",quant);
	break;
	case 15 : printf("\nO pedido foi (%i) X-tudo , que custa R$12,70 a unidade\n\n",quant);
	break;
	default : printf("\nOpção de pedido inválida\n");
	break;
	}
	system ("pause");
}
