/*-----------------------------------------
	Fun��o: Receber segundos e exibir em segundos,minutos e horas
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
		int tempo=0 ,hora=0, minuto=0, segundo=0;
		printf("Informe os segundos: ");
		scanf("%i", & tempo);
		hora= tempo/3600;
		minuto=tempo/60;
		if (tempo==60){
			minuto=1;
			hora=0;
			printf("%i segundos em:\n\nHoras: %i\n\nMinutos: %i\n\nSegunos: %i\n\n",tempo,hora,minuto,tempo);
		}
		else{
			printf("%i segundos em:\n\nHoras: %i\n\nMinutos: %i\n\nSegunos: %i\n\n",tempo,hora,minuto,tempo);
		}
		system("Pause");
}
