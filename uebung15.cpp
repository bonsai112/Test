// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <stdafx.h>
#include <stdio.h> 
#include <conio.h> 

int main(void)
{
	char CodeByte;
	printf("Bitte betaetigen Sie eine Taste !\n\n");
	CodeByte = _getch();
	printf("1. Tastencode-Byte: %2d\n", CodeByte);
	CodeByte = _getch();
	printf("2. Tastencode-Byte: %2d\n", CodeByte);
	_getch();
	return 0;
}