#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
 
 
 int main (){
 	
	setlocale(LC_ALL, "Portuguese");
 	

int verif; 
char menu; //recebe a opção do menu
char m1, m2, m3, m4, m5; //uso do no menu
char a, b, c, d; //recebe a senha de 4 dígitos 


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
		printf ("\n\n!!!Acesso Negado, senha inválida!!!");
	}
	
	
	if(verif == 1)
	{
		printf ("\n\n--Menu de Opções--");	
		printf ("\na - Saldo");	
		printf ("\nb - Depósito");	
		printf ("\nc - Pagamentos");	
		printf ("\nd - Tansferências");	
		printf ("\ns - Sair");
		printf ("\n\nDigite a Opção Desejada..:");
		scanf("%c", &menu);

		switch(menu)
		{		
			case 'a':
			case 'A': printf("\nOperação: saldo");
			break;
			case 'b':
			case 'B': printf("Operação: Depósito");
			break;
			case 'c':
			case 'C': printf("Operação: Pagamentos");
			break;
			case 'd':
			case 'D': printf("Operação: Tansferências");
			break;
			case 's':
			case 'S': printf("SAIR");
			break;
			default: printf("Opção inválida!!");
			break;		
		}		
	}	
		
		
	getch();
		
		
}
