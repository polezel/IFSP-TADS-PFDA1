#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main () 
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc;


	printf("Menu de Opções\n");
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Sair\n");
	printf("Escolha uma opção:");
	scanf("%d", &opc);
	
	switch(opc)
	{		
		case 1: printf("Menu de Cadastro:");
			break;
		case 2: printf("Listagem de Dados:");
			break;	
		case 3: printf("Saindo do sistemas:");
			break;
		default: printf("Opção invalida");
			break;		
	}


	

getch();

}
