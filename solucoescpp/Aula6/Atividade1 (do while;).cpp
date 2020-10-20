#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float base, altura, area;
	
	system ("cls");
	
	cont=0; 
	base=0; 
	altura=0; 
	area=0;
	
	do
	{
		 printf("Base...:" ); fflush(stdin); scanf("%f", &base);
		 printf("Altura..:" ); fflush(stdin); scanf("%f", &altura);
		  
		if ( base==0 || altura==0 )
		{
			printf ("\nImpossível calcular área do triângulo!");
		}
		
		else
		{
			area = base*altura/2;
			printf ( "Área =%5.2f\n\n", area );
		}
		
		cont++;
		
	}while ( cont < 3 );
	
	printf ("\n");
	system ("pause");
}
