#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	int ivar;
	float fR,fU,fU0,fC,fT,fErg,ftau;


	printf("Berechnungsvariable		Wahltaste\n");
	printf("-------------------		---------\n");
	printf("BITTE WAEHLEN:\n");
	printf("Spannung	u		   [1]\n");
	printf("Ladespannung	Uo		   [2]\n");
	printf("Widerstand	R		   [3]\n");
	printf("Kapazitaet	C		   [4]\n");
	printf("Zeit		t		   [5]\n\n\n");
	printf("Bitte eingeben: ");
	scanf("%d",&ivar);
	
	switch(ivar)
	{
	case 1: printf("Uo (V)	= ");
			scanf("%f",&fU0);
			printf("R (Ohm)	= ");
			scanf("%f",&fR);
			printf("C (myF)	= ");
			scanf("%f",&fC);
			printf("t (ms)	= ");
			scanf("%f",&fT);

			ftau=fR*(fC/1E3);
			fErg= fU0*(exp(-1*(((fT/1E3))/(ftau/1E3))));
			
			printf("\nSpannung: u = %.3f Volt\n\n",fErg);
			printf("Zeitkonstante : Tau = RC = %.3f ms\n",ftau);
			
			break;

	case 2: printf("\nu (V)	= ");
			scanf("%f",&fU);
			printf("R (Ohm)	= ");
			scanf("%f",&fR);
			printf("C (myF)	= ");
			scanf("%f",&fC);
			printf("t (ms)	= ");
			scanf("%f",&fT);
			
			ftau=fR*(fC/1E3);
			fErg= fU / (exp(-1*(((fT/1E3))/(ftau/1E3))));

			printf("\nLadespannung: Uo = %.3f Volt\n\n",fErg);
			printf("Zeitkonstante : Tau = RC = %.3f ms\n",ftau);

			break;

	case 3: printf("\nu (V)	= ");
			scanf("%f",&fU);
			printf("Uo (V)	= ");
			scanf("%f",&fU0);
			printf("C (myF)	= ");
			scanf("%f",&fC);
			printf("t (ms)	= ");
			scanf("%f",&fT);
			
			
			fErg= (fT/1E3) / (-1*(fC/1E6)*log((fU/fU0)));
			ftau=fErg*(fC/1E3);

			printf("\nWiderstand: R = %.3f Ohm\n\n",fErg);
			printf("Zeitkonstante : Tau = RC = %.3f ms\n",ftau);
			
			break;


	case 4: printf("\nu (V)	= ");
			scanf("%f",&fU);
			printf("Uo (V)	= ");
			scanf("%f",&fU0);
			printf("R (Ohm)	= ");
			scanf("%f",&fR);
			printf("t (ms)	= ");
			scanf("%f",&fT);
			
			
			fErg= (fT/1E3) / (-1*fR*log((fU/fU0)))*1E6;
			ftau=fR*(fErg/1E3);

			printf("\nKapazitaet: C = %.3f myF\n\n",fErg);
			printf("Zeitkonstante : Tau = RC = %.3f ms\n",ftau);
			
			break;

	case 5: printf("\nu (V)	= ");
			scanf("%f",&fU);
			printf("Uo (V)	= ");
			scanf("%f",&fU0);
			printf("R (Ohm)	= ");
			scanf("%f",&fR);
			printf("C (myF)	= ");
			scanf("%f",&fC);
			
			
			
			ftau=fR*(fC/1E3);
			fErg= -1*log(fU/fU0)*ftau;

			printf("\nZeit: t = %.3f ms\n\n",fErg);
			printf("Zeitkonstante : Tau = RC = %.3f ms\n",ftau);

			break;
	default: printf("Ungültige Eingabe");
	}





system("pause"); 
return 0; 
} 

