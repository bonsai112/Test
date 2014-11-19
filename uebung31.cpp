#include <stdafx.h>
#include <stdio.h> // Lösungsvorschlag zur Übung 31
#include <conio.h> 



int main(void)
{
	unsigned short usT, usM, usJ, usGueltig = 1, usZaehler = 0, usSchaltjahr = 0;


	printf("Bitte ein Datum im Format [T]T.[M]M.JJJJ eingeben: ");
	scanf_s("%hu.%hu.%hu", &usT, &usM, &usJ);

	if (usJ % 400 == 0 || (usJ % 4 == 0 && usJ % 100 != 0)) usSchaltjahr = 1; // Schaltjahr!! 

	if (usM > 12 || usM < 1 || usT < 1 || usT > 31) usGueltig = 0;
	else
	{
		if (usM == 4 || usM == 6 || usM == 9 || usM == 11)
		{
			if (usT>30) usGueltig = 0;
		}
		else // und der Februar? 
		{
			if (usM == 2 && usT > 28 + usSchaltjahr) usGueltig = 0;
		}
	}

	if (usGueltig)
	{
		switch (usM - 1)
		{
		case 11: usZaehler += 30;
		case 10: usZaehler += 31;
		case 9: usZaehler += 30;
		case 8: usZaehler += 31;
		case 7: usZaehler += 31;
		case 6: usZaehler += 30;
		case 5: usZaehler += 31;
		case 4: usZaehler += 30;
		case 3: usZaehler += 31;
		case 2: usZaehler += 28 + usSchaltjahr;
		case 1: usZaehler += 31;
		}
		usZaehler += usT;
		printf("\nDer %02hu.%02hu. ist der %hu. Tag des "
			"Jahres %hu !", usT, usM, usZaehler, usJ);
	}

	else
		printf("\nUNGUELTIGE EINGABE!");

	_getch();
	return 0;
}
