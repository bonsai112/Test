#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
int main( void) 
{ 
	unsigned char cB1,mask=0x20;
	
	printf("Bitte einen Grossbuchstaben eingeben: ");cB1=getche();
	cB1=cB1|mask;
	printf("\nDer zugehoerige Kleinbuchstabe: %c \n",cB1);
	printf("\n\nBitte einen Kleinbuchstaben eingeben: ");cB1=getche();
	printf("\nDer zugehoerige Grossbuchstabe: %c\n\n",cB1=cB1&~(1<<5));







system("pause"); 
return 0; 
} 

