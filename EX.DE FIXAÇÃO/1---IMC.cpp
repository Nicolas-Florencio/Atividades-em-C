/*-----------------------------------------
	Função: Calculo de IMC usando peso/(altura*altura)
	Autor: Gabriel Cesar Ragonha Rodrigues e Nicolas Florencio Alves
	Data de criação: 28/09/2019
	Data de modificação: 28/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float peso=0,altura=0,imc=0;
	printf("Informe sua altura: ");
	scanf("%f", & altura);
	printf("Informe o peso: ");
	scanf("%f", & peso);
	imc=peso/(altura*altura);
	printf("\nSeu IMC é de: %f\n\n",imc);
	
	if (imc<17){
		printf("Muito abaixo do peso segundo a OMS\n\n");
	}
	if (imc>=17 && imc<=18.49){
		printf("Abaixo do peso segundo a OMS\n\n");
	}
	if(imc>=18.50 && imc<=24.99){
		printf("Peso normal segundo a OMS\n\n");
	}
	if(imc>=25 && imc<=29.99){
		printf("Acima do peso segundo a OMS\n\n");
	}
	if(imc>=30 && imc<=34.99){
		printf("Obesidade 1 segundo a OMS\n\n");
	}
	if(imc>=35 && imc <39.99){
		printf("Obesidade 2 segundo a OMS\n\n");
	}
	if(imc>=40){
		printf("Obesidade 3 mórbida segundo a OMS\n\n");
	}
	system("pause");
}
