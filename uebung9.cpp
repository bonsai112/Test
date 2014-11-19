// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
int main(void)
{
	
	char	c1 = '3',
			c2 = 3;

	printf("%c3%c mit %%c = %c !\n", 39, 0x27, c1);
	printf("'3' mit %%d = %d !\n", c1);
	printf("3 mit %%c = %c !\n", c2);

	
	
	//_getch(); //Wartet auf einen Tastendruck
	system("Pause");
	return 0;
}

