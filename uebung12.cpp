// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
int main(void)
{
	int iZeichen, iSpalte, iZeile, iZfarbe, iHfarbe;

	printf("Gewuenschtes Ausgabezeichen:\n");
	printf("----------------------------\n\n");
	printf("ASCII-Dezimalwert = ");
	scanf_s("%d", &iZeichen);
	printf("\n\nGewuenschte Ausgabeposition:\n");
	printf("----------------------------\n\n");
	printf("Spalte: x = ");
	scanf_s("%d", &iSpalte);
	printf("Zeile : y = ");
	scanf_s("%d", &iZeile);
	printf("\n\Gewuenschte Zeichenfarbe ( 0 .. 15 ) = ");
	scanf_s("%d", &iZfarbe);
	printf("\n\Gewuenschte Hintergrundfarbe ( 0 .. 7 ) = ");
	scanf_s("%d", &iHfarbe);
	printf("\n\nIhre eingegebenen Werte:\n"
		"------------------------\n\n"
		"Bildschirmposition: ( %d / %d )\n"
		"Nummer der Zeichenfarbe: %d\n"
		"Nummer der Hintergrundfarbe: %d\n"
		" ... und hier das Zeichen: %c", iSpalte, iZeile, iZfarbe,
		iHfarbe, iZeichen);

	_getch();
	return 0;
}

