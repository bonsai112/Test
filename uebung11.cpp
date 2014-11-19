// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
int main(void)
{
	int ivar;
	ivar=0;
	
	printf("Bitte einen int-Wert im Bereich %d .. %d eingeben:",INT_MIN,INT_MAX);
	scanf_s("%d",&ivar);
	printf("\n\n");
	printf("%d\n\n",ivar);
	printf("Informationen ueber die int-Variable ivar:\n\n");
	printf("Adresse: %p\n",&ivar);
	printf("Groesse: %d Byte = %d Bit\n",sizeof(ivar),sizeof(ivar)*8);
	printf("Inhalt: %d dez = %p hex\n",ivar,ivar);




	//_getch(); //Wartet auf einen Tastendruck
	system("Pause");
	return 0;
}

