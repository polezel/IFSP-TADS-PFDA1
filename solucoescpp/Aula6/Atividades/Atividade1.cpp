#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");

	int i, qi;
	
	for(i=0; i<=100; i++)
	{
		if (i%3==0){
			printf("%i\n", i);
		}
	}
	system ("pause");

}

