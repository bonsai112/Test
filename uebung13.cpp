// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//



#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
int main(void)
{
	
	float fK=0,fzins=0;
	int iJahre=0;

	printf("Bitte eingeben:\n");
	printf("---------------\n");
	printf("Anfangskapital Ko (in Eur): ");
	scanf_s("%f",&fK);
	printf("\nLaufzeit n in Jahren: ");
	scanf_s("%d", &iJahre);
	printf("\nZinsfluss p in Prozent: ");
	scanf_s("%f", &fzins);
	printf("\nKapital nach %d Jahren einfacher Verzinsung: Kn = %.2f Euro\n", iJahre, fK*(1 + iJahre*(fzins / 100)));

	
	
	
	//_getch(); //Wartet auf einen Tastendruck
	system("Pause");
	return 0;
}

