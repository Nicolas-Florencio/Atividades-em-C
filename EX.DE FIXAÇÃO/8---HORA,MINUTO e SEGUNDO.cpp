/*-----------------------------------------
	Fun��o: Convers�o de horas,minutos e segundos e exibir em segundos
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int tempo=0 ,hora=0, minuto=0, segundo=0,segundos=0, option=0;
	//SEGUNDOS SER� A VARI�VEL QUE RECEBER� O TEMPO EM SEGUNDOS
	printf("Informe o tempo que ser� convertido em segundos: ");
	scanf("%i", & tempo);
	printf("Voc� informou qual formato de tempo:\n(1)Horas\n(2)Minutos\n(3)Segundos\n");
	scanf("%i", & option);
	if (option==1){
		segundos=tempo*3600;
		printf("%i horas em segundos fica da seguinte forma %i\n",tempo,segundos);
	}
	if(option==2){
		segundos=tempo*60;
		printf("%i minutos em segundos fica da seguinte forma %i\n",tempo,segundos);
	}
	if(option==3){
		printf("%i segundos em segundos fica da seguinte forma %i\n",tempo,segundos);
	}
	if(option>3 or option <1){
		printf("Op��o inv�lida!");
	}
	system("pause");
}
