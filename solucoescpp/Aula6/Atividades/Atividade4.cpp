#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
int i;
float graos, soma;

graos=1;
soma=0;
   
   for(i=1; i<16 ; i++){
	   
	
		graos = 2 * graos;
		soma =  soma + graos;
	
	}

	printf("  A quantidade de graos que o monge recebe: %.0f\n", soma);
	system("pause");
	return(0);
}
