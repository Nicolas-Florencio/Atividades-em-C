/*------------Theater------------------
|Names: Gabriel Cesar Ragonha Rodrigues|
|       Nicolas Flor�ncio Alves        |
|Date: 29/11/2019                      |
--------------------------------------*/

// Bibliotecas
#include <locale>
#include <iostream>

// Vari�veis
int option=1, cont = 0, price, l, c, contR=0, contO=0, conf=0, restcont=0;
float intprice=0.00, halfprice=0.00, orderprice=0.00, restprice=0.00;
char playName[50], chairs[25][20], D, O, R;
  
  
//Printa boas vindas
void welcome() {
  printf("\t\t\t\t         -----------------------------------\n\t\t\t\t\t| Seja bem-vindo ao teatro Arcadia! |\n\t\t\t\t         -----------------------------------");
}


//Mostra e recebe as op��es{
void options() {
  	printf("\n\n\t\t\t\t\t   Escolha entre as op��es abaixo: ");
  	printf("\n\n\t\t\t\t (0) Encerrar programa \n\t\t\t\t (1) Informar o valor do ingresso e tamanho da sala \n\t\t\t\t (2) Abrir um espet�culo \n\t\t\t\t (3) Vender um lugar \n\t\t\t\t (4) Verificar mapa do teatro \n\t\t\t\t (5) Encerrar o espet�culo \n\t\t\t\t (6) Verificar parciais \n\t\t\t\t (7) Confirmar reserva\n\n");
  	printf("\n\nDigite a op��o desejada: ");
  	scanf ("%i",& option);
  	system("cls");
  	if (option < 0 || option > 7){
  		while (option < 0 || option > 7){
  			printf("\n\nInsira uma op��o v�lida!\n");
  			printf("\n\n\t\t\t\t (1) Informar o valor do ingresso e tamanho da sala \n\t\t\t\t (2) Abrir um espet�culo \n\t\t\t\t (3) Vender um lugar \n\t\t\t\t (4) Verificar mapa do teatro \n\t\t\t\t (5) Encerrar o espet�culo \n\t\t\t\t (6) Verificar parciais \n\t\t\t\t (7) Confirmar reserva\n\n");
  			printf("\n\nDigite a op��o desejada, para sair escolha 0: ");
  			scanf ("%i",& option);
  			system("cls");
	    }
	}
}


//teste
void table() {
	printf("\n\n\n");
    	for ( l = 0; l < 25; l++){
        	for ( c = 0; c < 20; c++){
            	cont++;
            	D='D';
            	O='O';
            	R='R';
            	while (chairs[l][c] == false){
            		chairs[l][c]=D;
            	}
            	printf(" %c|",chairs[l][c]);
            	printf("");
            	if(cont==10){
            		printf("\t\t");
				}
            	if(cont == 20){
            		printf("\n");
                	cont = 0;
            	}   
       	 	}        
    	}
}


//Reserva
void order() {
	printf("\nInforme uma fileira entre 1 e 25: ");
		scanf("%i", &l);
		if(l>25 || l<1){
			while(l>25 || l<1){
				printf("Fileira inv�lida, informe uma fileira v�lida entre 1 e 25\n");
				printf("\nInforme uma fileira entre 1 e 25: ");
				scanf("%i", &l);
			}
		}
		l=l-1;
		printf("Informe uma coluna entre 1 e 20: ");
		scanf("%i", &c);
		if(c>20 || c<1){
			while(c>20 || c<1){
				printf("Coluna inv�lida, informe uma coluna v�lida entre 1 e 20\n");
				printf("\nInforme uma coluna entre 1 e 25: ");
				scanf("%i", &c);
			}
		}
		c=c-1;
		system("cls");
}


//Printa o valor do espet�culo e o tamanho da sala 111111111111111111    CERTOOOOOOOOO
void value() {
	if (intprice == false){
    	printf("\n\nN�o possuimos nenhum espet�culo no momento\n\n\n");
  	}
    else{   
    	printf("--------------------Espet�culo: %s--------------------\n\n", playName);
  		printf("\n\tO valor da inteira � de R$%.2f, e da meia � de R$%.2f\n\n\n",intprice, halfprice);
	}
	system("pause");
	system("cls");
}


//Abre um espet�culo 2222222222222222222222 CERTOOOOOOOOO
void theater() {
	fflush(stdin);
	if(intprice == false){
		printf("Insira o nome do espet�culo: ");
  		gets (playName);
  		printf("\nInsira o valor do espet�culo: ");
  		scanf("%f", &intprice);
  		printf("\n\n");
  		halfprice = intprice / 2;
  	}
  	else{
  		printf("Um espet�culo j� est� em andamento!\n");
  		printf("� necess�rio encerra-lo para abrir outro!\n\n");
	  }
  	system("pause");
	system("cls");
}


//Printa e recebe a compra de ingressos 3333333333333
void sell() {
	if (intprice == false){
    	printf("\n\nN�o possuimos nenhum espet�culo no momento!\n\n\n");
  	}
  	else{
  	orderprice=(intprice/100)*60;
  	restprice=(intprice/100)*40;
  	printf("\tEspet�culo: %s\n", &playName);
  	printf("\tRESERVANDO E COMPRANDO INGRESSOS\n");
  	printf("\n(1)Meia - R$%.2f", halfprice);
  	printf("\n(2)Inteira - R$%.2f", intprice); 
	printf("\n(3)Reserva - R$%.2f", orderprice);
	printf("\n\nInforme sua escolha: ");
  	scanf("%i", &price);
  	if (price < 1 || price > 3){
  		while (price < 1 || price > 3){
  			printf("Informe uma op��o v�lida!\n");
  			printf("\n(1)Meia - R$%.2f", halfprice);
  			printf("\n(2)Inteira - R$%.2f", intprice);
			printf("\n(3)Reserva - R$%.2f", orderprice);
			printf("\n\nInforme sua escolha: ") ;
  			scanf("%i", &price);
			}
		}
	if (price == 1 || price == 2){
		table();
		order();
		if(chairs[l][c]== D){
			chairs[l][c] = O;
			contO++;
			table();
			printf("\n\t\t\tAssento comprado!\n\n");
        	if(cont == 20){
           		printf("\n");
           		cont = 0;
       		}
		}
	}
	
	
	if (price == 3){
	table();
	order();	
		if(chairs[l][c]== D){
			chairs[l][c] = R;
			contR++;
			table();
			printf("\n\t\t\tAssento reservado!\n\n");
        	if(cont == 20){
           		printf("\n");
           		cont = 0;
       		}
		}
		}
	}
	system("pause");
    system("cls");
}


//Printa os bancos 4444444444         CERTOOOOOOOOO
void room() {
	table();
    printf("\n\n\tA nossa sala possui a capacidade de at� 500 pessoas\n\n");
    printf("\n\n\n");
    system("pause");
	system("cls");
}


//Reseta o espet�culo 55555555555     CERTOOOOOOOOO
void reset() {
	if (intprice == false){
    	printf("\n\nN�o possuimos nenhum espet�culo no momento!\n\n\n");
  	}
  	else{
		for(int a=0; a<25; a++){
			for(int b=0; b<20; b++){
				chairs[a][b]='D';
			}
		}
		printf("\n Espet�culo encerrado com sucesso!\n\n\n");
	}
	system("pause");
	system("cls");
}



void pars() {
	restcont = 500-(contO + contR);
	printf("Lugares dispon�veis %i\n", restcont);
	printf("Lugares ocupados %i\n", contO);
	printf("Lugares reservados %i\n", contR);
	system("pause");
	system("cls");
}


// CONFIRMA RESERVA
void confirm() {
	if (intprice == false){
    	printf("\n\nN�o possuimos nenhum espet�culo no momento!\n\n\n");
  	}
  	else{
		printf("\nInforme a fileira da reserva: ");
		scanf("%i", &l);
		if(l>25 || l<1){
			while(l>25 || l<1){
				printf("Fileira inv�lida, informe uma fileira v�lida entre 1 e 25\n");
				printf("\nInforme uma fileira entre 1 e 25: ");
				scanf("%i", &l);
			}
		}
		l=l-1;
		printf("Informe a coluna da reserva: ");
		scanf("%i", &c);
		if(c>20 || c<1){
			while(c>20 || c<1){
				printf("Coluna inv�lida, informe uma coluna v�lida entre 1 e 20\n");
				printf("\nInforme uma coluna entre 1 e 25: ");
				scanf("%i", &c);
			}
		}
		c=c-1;
		if (chairs[l][c] == R){
			printf("Deseja pagar R$%.2f restantes de sua reserva?\n\n", restprice);
			printf("(1) SIM\n(2) N�O\n\n");
			scanf("%i", &conf);
			if(conf == 1){
				chairs[l][c] = O;
				contO++;
				table();
				printf("\n\tReserva paga!\n\n\n");
			}
		}
		else{
			printf("\n\tReserva inexistente\n\n\n");
		}
	}
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
			case 0: printf("Programa Finalizado com sucesso\n\n"); 	  
	  		break;
			case 1:	room(); value();		
			break;
    		case 2: theater(); 
	  		break;
  			case 3: sell();
			break;
  			case 4: room();
			break;
  			case 5: reset();	
			break;
			case 6: pars();	
			break;
			case 7: confirm();
			break;
			default:
				printf("Estamos trabalhando nisso\n");
			break;
		}
	}
	system("pause");
}

