/* 



*/

/*------Bibliotecas-----*/

#include <iostream>
#include <locale>


int main(){
	setlocale(LC_ALL,"Portuguese");
	fflush(stdin);
	char jogo[3][3], nome1[50], nome2[50], X ='X', O ='O';
	int simbolo, l=0, c=0, loop=1, jogada=0;
	float j=0.0;
	
	//**********Declarando as vari�veis**********//
	
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			jogo[a][b]= ' ';
		}
	}
	
	//**********Recebendo os Nomes**********//
	
	printf ("\n\n-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-{ I N � C I O   D O   J O G O   D A   V E L H A }-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-\n");
	printf ("\n\nInforme o nome do 1� jogador: ");
	gets (nome1);
	printf ("Informe o nome do 2� jogador: ");
	gets (nome2);
	
	//**********Definindo um loop**********//
	
	while (loop == 1){
		simbolo=0;
		c=0;
		l=0;
		j-0.0;
		
	//**********Declarando as vari�veis**********//
	
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			jogo[a][b]= ' ';
		}
	}
	
	//**********Escolhendo os S�mbolos***********//
		printf ("\n(%s) informe seu s�mbolo de prefer�ncia \n(1)Para Xis \n(2)Para C�rculo\n\n", nome1);
		scanf ("%i",& simbolo);
		//https://pt.wikibooks.org/wiki/Programar_em_C%2B%2B/Manipulando_strings
		
	//**********Se s�mbolo for inv�lido**********//
	if (simbolo>2 || simbolo<1){
		for(int tent=3; tent>0; tent--){
		printf("\nVoc� tem %i tentativa(s) para digitar um novo valor v�lido, escolhe entre os valores seguintes \n(1)Xis \n(2)C�rculo\n\n", tent);
		scanf ("%i",& simbolo);
		if (simbolo==1 || simbolo==2){
			tent=0;
			}
		}
	}
		
	//**********Come�o do Programa X**********//
	j=0.0;
	if (simbolo == 1){
		while (j < 10.0){
			
	//----------1� JOGADOR XIS----------//
				
			printf ("\n\t\t\t     1� JOGADOR\n");
			printf ("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
			printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
			printf ("\n %s,Informe qual linha ser� sua jogada: ",& nome1);
			scanf ("%i",& l);
			
			if(l>3 || l<1){
				while(l>3 && l<1){
					scanf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
					scanf("%i",& l);
					}
				}
			l = l - 1;
			printf ("\n %s,Informe qual coluna ser� sua jogada: ",& nome1);
			scanf ("%i",& c);
			if(c>3 || c<1){
				while(c>3 || c<1){
					printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
					scanf("%i",& c);
				}
			}
			jogada++;
			c = c - 1;
			if(jogo[l][c]==X || jogo[l][c]==O){
				while(jogo[l][c]==X || jogo[l][c]==O){
					printf("\n\nPosi��o j� ocupada, informe uma linha v�lida: ");
					scanf("%i",& l);
					l = l - 1;
					printf("\n\nPosi��o j� ocupada, informe uma coluna v�lida: ");
					scanf("%i",& c);
					c = c - 1;				
					}
				}
			jogo[l][c] = X;
			j = j + 2.0;
		
		//**********Verifica��o do ganhador  X JOGADOR 1   N� 1**********//
							
				if(jogo[0][0]==X && jogo [0][1] == X && jogo [0][2] == X || jogo[1][0]== X && jogo [1][1] == X && jogo [1][2] == X || jogo[0][0]== X && jogo [1][1] == X && jogo [2][2] == X || jogo[0][2]==X && jogo [1][1] == X && jogo [2][0] == X || jogo[0][0]== X && jogo [1][0] == X && jogo [2][0] == X || jogo[0][1]== X && jogo [1][1] == X && jogo [2][1] == X || jogo[0][2]== X && jogo [1][2] == X && jogo [2][2] == X){
				printf("\n\n\t\t\t %s � O VENCEDOR\n",& nome1);
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				j = j + 10.0;
				}
				if(jogada==9 && j < 20.0){
					printf("\n\n\t\t\tO JOGO TERMINOU EM VELHA \n");
					}

				//**********2� JOGADOR CIRCULO**********//

				if (j == 10.0){
				printf ("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				}
				if (j < 10.0){
				printf ("\n\t\t\t     2� JOGADOR\n");
				printf ("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				printf ("\n %s Informe qual linha ser� sua jogada: ",& nome2);
				scanf ("%i",& l);
				if(l>3 || l<1){
				while(l>3 || l<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& l);
				}
				}
				l = l - 1;
				printf ("\n%s ,Informe qual coluna ser� sua jogada: ",& nome2);
				scanf ("%i",& c);
				if(c>3 || c<1){
				while(c>3 || c<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& c);
				}
				}
				jogada++;
				c = c - 1;
				if(jogo[l][c]==X || jogo[l][c]==O){
					while(jogo[l][c]==X || jogo[l][c]==O){
					printf("\n\nPosi��o j� ocupada, informe uma linha v�lida: ");
					scanf("%i",& l);
					l = l - 1;
					printf("\n\nPosi��o j� ocupada, informe uma coluna v�lida: ");
					scanf("%i",& c);
					c = c - 1;					
				}
				}
				jogo[l][c] = O;
			}
			
			//**********Verifica��o do ganhador O JOGADOR 2   N� 1**********//
			
			if(jogo[0][0]==O && jogo [0][1] == O && jogo [0][2] == O || jogo[1][0]== O && jogo [1][1] == O && jogo [1][2] == O || jogo[0][0]== O && jogo [1][1] == O && jogo [2][2] == O || jogo[0][2]==O && jogo [1][1] == O && jogo [2][0] == O || jogo[0][0]== O && jogo [1][0] == O && jogo [2][0] == O || jogo[0][1]== O && jogo [1][1] == O && jogo [2][1] == O || jogo[0][2]== O && jogo [1][2] == O && jogo [2][2] == O){
				printf("\n\n\t\t\t %s � O VENCEDOR\n",& nome2);
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				j = j + 10.0;
				}
			}
		}


				//**********Come�o do Programa O**********//
		
		if (simbolo == 2){
			while (j < 10.0){
					
		//----------1� JOGADOR CIRCULO----------//
		
				printf ("\n\t\t\t     1� JOGADOR\n");
				printf ("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				printf ("\n %s, Informe qual linha ser� sua jogada: ",& nome1);
				scanf ("%i",& l);
				if(l>3 || l<1){
				while(l>3 || l<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& l);
				}
				}
				l = l - 1;
				printf ("\n %s ,Informe qual coluna ser� sua jogada: ",& nome1);
				scanf ("%i",& c);
				if(c>3 || c<1){
				while(c>3 || c<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& c);
				}
				}
				c = c - 1;
				jogada++;
				if(jogo[l][c]==X || jogo[l][c]==O){
					while(jogo[l][c]==X || jogo[l][c]==O){
					printf("\n\nPosi��o j� ocupada, informe uma linha v�lida: ");
					scanf("%i",& l);
					l = l - 1;
					printf("\n\nPosi��o j� ocupada, informe uma coluna v�lida: ");
					scanf("%i",& c);
					c = c - 1;					
				}
				}
				jogo[l][c] = O;
				j = j + 2.0;
		
			//**********Verifica��o do ganhador O JOGADOR 1   N� 2**********//
			
		if(jogo[0][0]==O && jogo [0][1] == O && jogo [0][2] == O || jogo[1][0]== O && jogo [1][1] == O && jogo [1][2] == O || jogo[0][0]== O && jogo [1][1] == O && jogo [2][2] == O || jogo[0][2]==O && jogo [1][1] == O && jogo [2][0] == O || jogo[0][0]== O && jogo [1][0] == O && jogo [2][0] == O || jogo[0][1]== O && jogo [1][1] == O && jogo [2][1] == O || jogo[0][2]== O && jogo [1][2] == O && jogo [2][2] == O){
				printf("\n\n\t\t\t %s � O VENCEDOR\n",& nome1);
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				j = j + 10.0;
			}
		
		//**********2� JOGADOR XIS**********//
				
				if(j == 10.0){
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				}
				if (j < 10.0){
				printf("\n\t\t\t     2� JOGADOR\n");
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				printf("\n %s, Informe qual linha ser� sua jogada: ",& nome2);
				scanf ("%i",& l);
				if(l>3 || l<1){
				while(l>3 || l<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& l);
				}
				}
				l = l - 1;
				printf ("\n %s, Informe qual coluna ser� sua jogada: ",& nome2);
				scanf ("%i",& c);
				if(c>3 || c<1){
				while(c>3 || c<1){
				printf("\n Escolha entre os valores seguintes \n(1) \n(2)\n(3)\n");
				scanf("%i",& c);
				}
				}
				jogada++;
				c = c - 1;
				if(jogo[l][c]==X || jogo[l][c]==O){
					while(jogo[l][c]==X || jogo[l][c]==O){
					printf("\n\nPosi��o j� ocupada, informe uma linha v�lida: ");
					scanf("%i",& l);
					l = l - 1;
					printf("\n\nPosi��o j� ocupada, informe uma coluna v�lida: ");
					scanf("%i",& c);
					c = c - 1;
				}
				}
				jogo[l][c] = X;
					}							
		
				//**********Verifica��o do ganhador X JOGADOR 2   N� 2**********//
			
			if(jogo[0][0]==X && jogo [0][1] == X && jogo [0][2] == X || jogo[1][0]== X && jogo [1][1] == X && jogo [1][2] == X || jogo[0][0]== X && jogo [1][1] == X && jogo [2][2] == X || jogo[0][2]==X && jogo [1][1] == X && jogo [2][0] == X || jogo[0][0]== X && jogo [1][0] == X && jogo [2][0] == X || jogo[0][1]== X && jogo [1][1] == X && jogo [2][1] == X || jogo[0][2]== X && jogo [1][2] == X && jogo [2][2] == X){
				printf("\n\n\t\t\t %s � O VENCEDOR\n",& nome1);
				printf("\n\t      Coluna 1\t      Coluna 2\t      Coluna 3");
				printf ("\n\t ����������������������������������������������� \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \n Linha 1 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 2 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t |_______________*_______________*_______________| \n\t | \t\t | \t\t | \t\t | \n\t | \t\t |\t\t | \t\t | \n Linha 3 | \t %c \t | \t %c \t | \t %c \t | \n\t | \t\t | \t\t | \t\t | \n\t | \t\t | \t\t | \t\t | \t\t\n\t ����������������������������������������������� \n", jogo[0][0],jogo[0][1],jogo[0][2],jogo[1][0],jogo[1][1],jogo[1][2],jogo[2][0],jogo[2][1],jogo[2][2]);
				j = j + 10.0;
				}
			if(jogada==9 && j < 20.0){
				printf("\n\n\t\t\tO JOGO TERMINOU EM VELHA \n");
		}
			}	
		}
		printf("\n\nDigite o n�mero (1) para continuar jogando\n\nDigite qualquer n�mero para parar de jogar\n");
		scanf("%i",& loop);
					
		//**********FIM DO PROGRAMA**********//	
}
	printf("\n\n??-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-?{ F I M   D O   J O G O   D A   V E L H A }?-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-??");
}
