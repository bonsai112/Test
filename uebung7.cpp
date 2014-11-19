// KonsolenProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>
int main(void)
{
float fproz=5.5;
unsigned short usKdNr=12355;
unsigned char ucbitAD=11001111;
unsigned short usbitAD=110011111101;
float feinkommen=3000.23;
unsigned short usjahresein=60000;
short sgeo=-2000;
unsigned long ulip=1921681081;
char cfahr=1;
unsigned long ukfz=134000;
char ctemp=30;
double djahretat=12345678.22;


	printf("Variable			|	Ihr Inhalt\n");
	printf("-------------------------------------------------------\n");
	printf("Prozentwert			|	%.2f%%\n",fproz);
	printf("Kundennr			|	%d\n",usKdNr);
	printf("8-Bit AD			|	%d\n",ucbitAD);
	printf("12-Bit AD			|	%d\n",usbitAD);
	printf("Monatseinkommen			|	%.2f Euro\n",feinkommen);
	printf("Jahreseinkommen			|	%d Euro\n",usjahresein);
	printf("Geo-Hoehe			|	%dm\n",sgeo);
	printf("IP-Adresse			|	%ul\n",ulip);
	printf("Fuehrerschein?(1=ja,0=nein)	|	%d \n",cfahr);
	printf("Kilometerstand			|	%ldkm\n",ukfz);
	printf("Temperatur			|	%d Grad\n",ctemp);
	printf("Jahresetat BR			|	%.2lf Euro\n",djahretat);






	//_getch(); //Wartet auf einen Tastendruck
	system("Pause");
	return 0;
}

