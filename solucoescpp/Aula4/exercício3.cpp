#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc;


	printf("Menu de Op��es\n");
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Sair\n");
	printf("Escolha uma op��o:");
	scanf("%d", &opc);
	
	switch(opc)
	{		
		case 1: printf("Menu de Cadastro:");
			break;
		case 2: printf("Listagem de Dados:");
			break;	
		case 3: printf("Saindo do sistemas:");
			break;
		default: printf("Op��o invalida");
			break;		
	}


	

getch();

}
