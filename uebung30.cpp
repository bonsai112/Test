#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	int taste,n;
	double kn, ko, p;

	printf("Auswertung der Zinseszinsformel    Berechnungsvariable    Wahltaste \n");
	printf("                                   -------------------    --------- \n");
	printf("+---------------------------+      Endkapital     Kn         [1]    \n");
	printf("|                   p    n  |      Anfangskapital Ko         [2]    \n");
	printf("|  Kn = Ko*( 1 +   ---  )   |      Zinsfuss       p          [3]    \n");
	printf("|                  100      |      Laufzeit       n          [4]    \n");
	printf("+---------------------------+                                       \n");

	printf("Was moechten Sie berechnen?\n");
	taste=getch();

	printf("%d\n",taste);
	switch(taste)
	{
		case '1': 
				printf("K0 (EUR) = "); scanf("%f",&ko);
				printf("p  (%%)  = "); scanf("%f",&p);
				printf("Laufzeit = "); scanf("%f",&n);
				kn=ko* pow((1+(p/100)),n);
				printf("%.1f",kn);

		break;

		case '2': 
				printf("Kn (EUR) = "); scanf("%f",&kn);
				printf("p  (%%)  = "); scanf("%f",&p);
				printf("Laufzeit = "); scanf("%f",&n);
				ko=kn/(pow((1+(p/100)),n));
		break;

		case '3': 
				printf("Kn (EUR) = "); scanf("%f",&kn);
				printf("K0 (EUR) = "); scanf("%f",&ko);
				printf("Laufzeit = "); scanf("%f",&n);
				p=;
		break;

		case '4': 
				printf("Kn (EUR) = "); scanf("%f",&kn);
				printf("K0 (EUR) = "); scanf("%f",&ko);
				printf("p  (%%)  = "); scanf("%f",&p);
				n=;
				
		break;
	}
	

system("pause"); 
return 0; 
} 

