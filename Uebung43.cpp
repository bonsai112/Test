#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <limits.h>


int main(void)
{
	
	int i=0,iz2,ib;
	char iz;

	printf("Bitte ein ASCII-Zeichen eingeben: ");
	scanf("%c",&iz);
	printf("\nASCII-Code des Zeichens '%C' : ",iz);
	for(i=7;i>=0;i--)
	{
	printf("%d",(iz>>i)&1);
	
	}
	printf("   ( = %d dez = %02Xhex = %o okt )",iz,iz,iz);


	
	printf("\n\n");
	system("pause");
	return 0;
}

