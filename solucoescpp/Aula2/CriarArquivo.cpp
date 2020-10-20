#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
FILE *arq;
//variavel de atribuição de arquivo
	
	
	arq = fopen("arquivo.txt", "w"); 				
	//fopen (fileopen) comando de abertura de arquivo 
	//atribuir parametros de arquivo, nome e tipo [exemplo do tipos = "a,w"]
	
	fprintf(arq, "IFSP - PRIMEIRO SEMESTRE\n");
	//escrevendo no arquivo criado
	
		
	fclose(arq);									 
	//[***IMPORTANTE***] 	fclose comando de fechamento de arquivo 	[***IMPORTANTE***]
	printf("O arquivo foi criado com sucesso!!");
	system("pause");
}
