#include <stdafx.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>


int main( void) 
{ 
	float U,R,Rl,Pn,x,R2,U2,P;

	printf("Belasteter Spannungsteiler\n");
	printf("--------------------------\n\n");
	printf("Eingangsspannung		(in V)	: "); 
	scanf_s("%f",&U);
	printf("Teilerwiderstand	      (in Ohm)	: ");
	scanf_s("%f",&R);
	printf("Verbraucherwiderstand	      (in Ohm)	: ");
	scanf_s("%f",&Rl);
	printf("Verbrauchsleistung		(in W)	: ");
	scanf_s("%f",&Pn);
	printf("Schleiferstellung	( 0 <= x <= 1)	: ");
	scanf_s("%f",&x);
	printf("-------------------------------------------\n");

	R2=x*R;
	U2=(x*U)/(1+(x-(x*x))*(R/Rl));
	P=(U2*U2)/Rl;
	
	printf("R2 = %.1f Ohm\n",R2);
	printf("U2 = %.1f V\n",U2);
	printf("P  = %.1f W ",P);
	
	if (P > (Pn*1.1))
		{
			printf("ACHTUNG: Verbraucher wird ueberlastet! \n");
			printf("(%.1f %% ueber Nennleistung)\n",(P/Pn)*10);

		}
	else
		{
			printf("	( = %.1f %% der Nennleistung )\n",(P/Pn)*100);
		}

system("pause"); 
return 0; 
} 

