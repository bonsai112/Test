#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define ESC 27
#define j 106
#define n 110

int main(void)
{
float fwert=0, fwertaddiert=0;
unsigned int uicount =1, uinp;
char taste=0;
int x;

do
{
	system("CLS");
	fwert=0;
	fwertaddiert=0;
	uicount=1;
printf("Bitte Widerstandswerte in Ohm eingeben:\n");
printf("(Ende durch eingabe eines negativen Wertes)\n");
while (fwert >= 0)
{
	printf("R%u = ",uicount);
	scanf ("%f",&fwert);
	if (fwert>=0)
	{
		fwertaddiert = fwertaddiert + fwert;
		uicount++;
	}
	if (fwert<0&&uicount<2)
	{
		printf("Bitte wenigstens e i n e n gueltigen Wert eingeben!\n");
		fwert=0;
	}
}
printf("Auf wieviele Nachpunktstellen soll gerundet werden? ");
scanf ("%u",&uinp);
uicount--;
fwert = fwertaddiert/uicount;
printf("\nMittelwert der %d Werte %.*f Ohm",uicount,uinp,fwert);
printf("\n\nNochmal? Taste[J] fuer Ja, Taste [N] fuer Nein!");

do
{
	
	taste = tolower(getch());
	if (!_getch()) _getch();	
}
while ((taste != j) && (taste != n));
}
while (taste == j );
return 0;
}