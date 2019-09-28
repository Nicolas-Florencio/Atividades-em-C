/*-----------------------------------------
	Fun��o: Converter Celsius para Fahrenheit usando �F= (�C * 1.8) + 32.00 
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de cria��o: 28/09/2019
	Data de modifica��o: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){	
	setlocale(LC_ALL, "PORTUGUESE");
	
	float fahren,celsius;
	int option=0;
	
	printf("Se deseja converter Celsius para Fahrenheit(1)\nSe deseja converter Fahrenheit para Celsius(2)\n");
	scanf("%i", & option);

	//se op��o 1 for selecionada	
	if(option==1){
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", & celsius);
	fahren=(celsius*1.8) + 32.00;
	printf("\n%f graus Celsius em graus Fahrenheit �:%f\n\n ",celsius,fahren);
	}
	
	if(option==2){
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", & fahren);
	celsius= (fahren-32)/1.8;
	printf("\n%f graus Fahrenheit em graus Celsius �:%f\n\n ",fahren,celsius);
	}
	if (option>2 or option<1){
		printf("Op��o inv�lida.\n");
	}
	system("pause");
}
