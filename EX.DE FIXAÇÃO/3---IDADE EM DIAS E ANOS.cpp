/*-----------------------------------------
	Fun��o: Receber o ano de nascimento do aluno e exibir a sua idade em dias e anos 
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){	
	setlocale(LC_ALL, "PORTUGUESE");
	int idade=0, ano_nasc=0, ano_atual=0,idadeAno=0,idadeDias=0;
	printf("Informe seu ano de nascimento: ");
	scanf("%i", & ano_nasc);
	printf("Informe em que ano voc� est�: ");
	scanf("%i", & ano_atual);
	idadeAno= ano_atual-ano_nasc;
	if(idadeAno<0){
		printf("\nAno de nascimento ou ano atual est�o inv�lidos.\n");
		
	}
	else{
	idadeDias=365*idadeAno;
	printf("\n\nAt� hoje voc� tem %i anos de idade e %i dias de idade!\n\n",idadeAno,idadeDias);
	system("pause");
	}
}
