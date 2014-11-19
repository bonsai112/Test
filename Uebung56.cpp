

#include <stdio.h>  
#include <conio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>  
#include <string.h>



int main(void)
{
	
	char strText[80+1];
	int ix=0,i=0;

	printf("Bitte einen max. 80 Zeichen langen Text eingeben: \n\n");
	gets_s(strText);		//gets_s weil VS2013
	for (i = 0; i < 81; i++)
	{
		if (strText[i] == 32)
			ix = ix + 1;
		if (strText[i] > 96 & strText[i] < 123) //56b
			strText[i] = strText[i] - 32;		//56b
	}

	printf("\nDer String \"%s\" \n\nenthaelt %d Zeichen, davon %d Leerzeichen\n",strText,strlen(strText),ix);

	_getch(); 
	return 0;
}