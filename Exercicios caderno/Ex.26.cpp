/*-----------------------------------------
	Fun��o: Ler e calcular o quadrado do n�mero, parar quando 0
	Autor: Nicolas Florencio Alves
	Data de cria��o: 30/09/2019
	Data de modifica��o: 30/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
    setlocale(LC_ALL, "");
    int n=1,nQua=0;
    while(n>0){
    printf("Informe um n�mero: ");
    scanf("%i", & n);
    nQua=n*n;
    printf("\n%i ao quadrado �: %i\n\n", n,nQua);
    printf("Para sair digite 0, se quiser continuar aperte qualquer outro n�mero.\n\n");
    scanf("%i", & n);
    }
    system("pause");
    }
