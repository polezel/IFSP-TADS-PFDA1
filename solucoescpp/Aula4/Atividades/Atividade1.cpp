#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 
 
 int main (){
 	
	setlocale(LC_ALL, "Portuguese");
 	

int verif; 
char menu; //recebe a op��o do menu
char m1, m2, m3, m4, m5; //uso do no menu
char a, b, c, d; //recebe a senha de 4 d�gitos 


	printf ("Digite sua senha: ");
	a = getch();	
	printf ("*");
	b = getch();
	printf ("*");
	c = getch();
	printf ("*");
	d = getch();
	printf ("*");
	
	
	if(a == '1' && b == '3' && c == '1' && d == '0'){
		verif = 1;
	}
		
	else{	
		printf ("\n\n!!!Acesso Negado, senha inv�lida!!!");
	}
	
	
	if(verif == 1)
	{
		printf ("\n\n--Menu de Op��es--");	
		printf ("\na - Saldo");	
		printf ("\nb - Dep�sito");	
		printf ("\nc - Pagamentos");	
		printf ("\nd - Tansfer�ncias");	
		printf ("\ns - Sair");
		printf ("\n\nDigite a Op��o Desejada..:");
		scanf("%c", &menu);

		switch(menu)
		{		
			case 'a':
			case 'A': printf("\nOpera��o: saldo");
			break;
			case 'b':
			case 'B': printf("Opera��o: Dep�sito");
			break;
			case 'c':
			case 'C': printf("Opera��o: Pagamentos");
			break;
			case 'd':
			case 'D': printf("Opera��o: Tansfer�ncias");
			break;
			case 's':
			case 'S': printf("SAIR");
			break;
			default: printf("Op��o inv�lida!!");
			break;		
		}		
	}	
		
		
	getch();
		
		
}
