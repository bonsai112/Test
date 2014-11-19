#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	int iz,iz2,ib;

	printf("Bitte einen %d-Bit Int-Wert eingeben: ",sizeof(iz)*8);fflush(stdin); scanf("%d",&iz);
	printf("Welches Bit soll angezeigt werden? Bit Nr.: ");fflush(stdin); scanf("%d",&ib);
	iz2=(iz>>ib)&1;

	printf("Bit Nr. %d der int-Darstellung von %d \( = %0*Xh ) hat den Wert %d\n",ib,iz,sizeof(iz)*2,iz,iz2);








system("pause"); 
return 0; 
} 

