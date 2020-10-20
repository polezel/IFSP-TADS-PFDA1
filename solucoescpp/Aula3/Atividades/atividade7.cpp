#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	printf("Exercício 7\n\n\n");
	
int diaN, mesN, anoN, diaA, mesA, anoA, idA, idM, idS, idD;
int anodia, mesdia, semanadia, diadia;
			
	
	printf("Insira o dia do nascimento..:");
    scanf("%d", &diaN);
    printf("Insira o mes de nascimento..:");
    scanf("%d", &mesN);
    printf("Insira o ano de nascimento..:");
    scanf("%d", &anoN);
	printf("Insira o dia atual..:");
    scanf("%d", &diaA);
    printf("Insira o mes atual..:");
    scanf("%d", &mesA);
    printf("Insira o ano atual..:");
    scanf("%d", &anoA);
	
	anodia = (anoA-anoN)*365;
	mesdia = (mesA-mesN)*30.4;
	diadia = (anodia-mesdia)+(diaA-diaN);	
	idA = (diadia/365);
	idM = (diadia/30.4);
	idS = (diadia/7);	
    
	printf("\nSua idade em anos é, aproximadamente: %d", idA);
	printf("\nSua idade em meses é, aproximadamente: %d", idM);
	printf("\nSua idade em semanas é, aproximadamente: %d", idS);
	printf("\nSua idade em dias é, aproximadamente: %d", diadia);
		
getch();
}
