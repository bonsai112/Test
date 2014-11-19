#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	int iZahl;
	double kn, ko, p;

	printf("Bitte eine Zahl >= 10 eingeben: ");
	scanf("%d", &iZahl);

	If(iZahl < 10)
		printf("Eingegebene Zahl zu klein!");
	else
	{
		iZahl = iZahl - (iZahl % 10);


	}


system("pause"); 
return 0; 
} 

