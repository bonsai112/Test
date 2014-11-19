#include <stdio.h>		// Lösungsvorschlag zu Übung 35
#include <conio.h>
#include <time.h>


int main(void)  
{
  int iNdex = 1, iNps;
  float fR , fSumme = 0, fMittelwert;

  printf("Mittelwertberechnung fuer eingegebene Widerstandswerte\n"
         "-----------------------------------------------------\n\n"
         "Bitte die Widerstandswerte (in Ohm) eingeben.\n"
         "(Ende durch Eingabe eines negativen Wertes!)\n\n");
  printf("R1   = ");
  scanf("%f",&fR);
  while(fR>=0)
  {
    	fSumme += fR;
     	printf("R%-3d = ",++iNdex);
     	scanf("%f",&fR);
  }

  if(iNdex!=1)	// falls der erste eingegebene Wert positiv war...
  {
    fMittelwert = fSumme/--iNdex;   // der Zähler steht zu hoch!
    printf("\nAuf wie viele Nachpunktstellen runden? NP = ");
    scanf("%d",&iNps);
    printf("\nMittelwert der %d Werte = %.*f Ohm",iNdex, iNps, fMittelwert);
  }
  else			// ... andernfalls Fehlermeldung!

     printf("\nBereits der erste eingegebene Widerstand war negativ!");

  _getch();
  return 0;
}
