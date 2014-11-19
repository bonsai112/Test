#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	unsigned int uiz,mask;
	int n;

	printf("Bitte geben sie eine unsigned int-Variable ein: "); scanf("%X",&uiz);
	printf("Bitte geben sie die Anzahl der zu verschiebenden Stellen an: "); scanf("%d",&n);
	
	mask=uiz >> ((sizeof(uiz)*8)-n);
	uiz=uiz<<n;
	
	printf("Nach links rotiert: %0*X\n",sizeof(uiz)*2,uiz|mask);


system("pause"); 
return 0; 
} 

