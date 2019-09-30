/*-----------------------------------------
	Função: Ler e calcular o quadrado do número, parar quando 0
	Autor: Nicolas Florencio Alves
	Data de criação: 30/09/2019
	Data de modificação: 30/09/2019
-------------------------------------------*/
#include <iostream>
#include <locale>
int main(){
    setlocale(LC_ALL, "");
    int n=0,nQua=0;
    while(n>0){
    printf("Informe um número: ");
    scanf("%i", & n);
    nQua=n*n;
    printf("\n%i ao quadrado é: %i\n\n", n,nQua);
    printf("Para sair digite 0\n\n");
    }
    system("pause");
    }
