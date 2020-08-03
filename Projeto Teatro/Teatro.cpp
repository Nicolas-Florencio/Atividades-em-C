/*------------Theater------------------
|Names: Gabriel Cesar Ragonha Rodrigues|
|       Nicolas Florêncio Alves        |
|Date: 29/11/2019                      |
--------------------------------------*/

// Bibliotecas
#include <locale>
#include <iostream>

// Variáveis
int option=1, chairs[25][25], cont = 0, price,l,c;
float intprice=0.00, halfprice=0.00;
char personName[50], playName[50], lugar = ' ', org[25][20];
  
  
//Printa boas vindas
void welcome() {
  printf("\t\t\t\t         -----------------------------------\n\t\t\t\t\t| Seja bem-vindo ao teatro Arcadia! |\n\t\t\t\t         -----------------------------------");
}


//Mostra e recebe as opções{
void options() {
  	printf("\n\n\t\t\t\t\t   Escolha entre as opções abaixo: ");
  	printf("\n\n\t\t\t\t (0) Encerrar programa \n\t\t\t\t (1) Informar o valor do ingresso e tamanho da sala \n\t\t\t\t (2) Abrir um espetáculo \n\t\t\t\t (3) Reservar ou cancelar a reserva de um lugar \n\t\t\t\t (4) Vender um lugar \n\t\t\t\t (5) Verificar mapa do teatro \n\t\t\t\t (6) Encerrar o espetáculo \n\t\t\t\t (7) Verificar parciais\n");
  	printf("\n\nDigite a opção desejada: ");
  	scanf ("%i",& option);
  	system("cls");
  	if (option <= 0 || option > 7){
  		while (option < 0 || option > 7){
  			printf("\n\nInsira uma opção válida!\n");
  			printf("\n\n\t\t\t\t (1) Informar o valor do ingresso e tamanho da sala \n\t\t\t\t (2) Abrir um espetáculo \n\t\t\t\t (3) Reservar ou cancelar a reserva de um lugar \n\t\t\t\t (4) Vender um lugar \n\t\t\t\t (5) Verificar mapa do teatro \n\t\t\t\t (6) Encerrar o espetáculo \n\t\t\t\t (7) Verificar parciais\n");
  			printf("\n\nDigite a opção desejada, para sair escolha 0: ");
  			scanf ("%i",& option);
  			system("cls");
	    }
	}
}


//Printa o valor do espetáculo e o tamanho da sala 111111111111111111
void value() {
	if (intprice == false){
    	printf("\n\nNão possuimos nenhum espetáculo no momento\n");
  	}
    else{   
    	printf("--------------------Espetáculo: %s--------------------\n", playName);
  		printf("O valor da inteira é de R$%.2f, e da meia é de R$%.2f\n",intprice, halfprice);
	}
	system("pause");
	system("cls");
}


//Abre um espetáculo 2222222222222222222222
void theater() {
	printf("Insira o nome do espetáculo: ");
  	scanf("%s", &playName);
  	printf("\nInsira o valor do espetáculo: ");
  	scanf("%f", &intprice);
  	halfprice = intprice / 2;
  	system("pause");
	system("cls");
}


//Cancela e faz reservas
void order() {
	
}


//Printa e recebe a compra de ingressos 4444444444444444444
void sell() {
  	printf("COMPRANDO INGRESSOS\n");
	printf("Digite (1) para meia ou (2) para inteira:\n");
  	printf("(1)Meia - R$%.2f", &halfprice);
  	printf("(2)Inteira - R$%.2f", &intprice);  
  	scanf("%i", &price);
   	if (price < 1 || price > 2){
   		while (price != 1 || 2){
       		printf("Informe um dos tipos:\n");
       		printf("(1)Meia - R$%.2f", &halfprice);
       		printf("(2)Inteira - R$%.2f", &intprice);  
       		scanf("%i", &price);
     		}
   	}
    if (price == 1){
      printf("Voce comprou uma meia");
    }
    if (price == 2){
      printf("Voce comprou uma inteira");
    }
	printf("Informe a linha de cadeiras");
	scanf("%i",& l);  
}


//Printa os bancos 5555555555555555
void room() {
	printf("\n\n\n");
    for ( l = 0; l < 20; l++){
        for ( c = 0; c < 25; c++){
            cont++;
            chairs[l][c] = 'D';
            printf(" %c|",chairs[0][0]);
            printf("");
            if(cont == 25){
            	printf("\n");
                cont = 0;
            }   
        }        
    }
    printf("\n\n\tA nossa sala possui a capacidade de até 500 pessoas\n\n");
    printf("\n\n\n");
    system("pause");
	system("cls");
}


//Tela principal
int main() {
  	setlocale(LC_ALL,"Portuguese");
  	welcome();
  	while(option != 0){
  		options();
  	
  		switch (option){
			case 0: printf("Programa Finalizado com sucesso\n"); 	  
	  		break;
			case 1: value();
					room();
			break;
    		case 2: theater(); 
	  		break;
  			case 3: printf("Estamos trabalhando nisso\n"); 	
	  		break;
  			case 4: room(); 
		  			sell();
			break;
  			case 5: room();
			break;
  			case 6: printf("Estamos trabalhando nisso\n");	
			break;
			case 7: printf("Estamos trabalhando nisso\n");	
			break;
			default:
				printf("Estamos trabalhando nisso\n");
			break;
		}
	}
	system("pause");
}

