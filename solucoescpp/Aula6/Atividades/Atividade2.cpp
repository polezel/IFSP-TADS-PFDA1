#include <conio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	
	setlocale(LC_ALL, "Portuguese");

	int i, qi;
	
	for(i=15; i<=200; i++)
	{
		qi = i*(i);
		printf("%i\n", qi);
	}
	system ("pause");

}

