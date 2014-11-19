#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#include <conio.h>
#include <limits.h>

int main( void) 
{ 
	unsigned char Byte1, Byte2, Byte3; 
	int BitNr; 

		Byte1 = 0x80; 
		Byte2 = 0x7F; 
		Byte3 = 0x55; 
		
		printf("Welches Bit im Byte %Xh soll gesetzt werden? Bit Nr.:",Byte1);scanf("%d",&BitNr);
		printf("Das Byte nach Setzen von Bit Nr. %d: %Xh\n\n",BitNr,Byte1=Byte1|1<<BitNr);
		
		printf("Welches Bit im Byte %Xh soll rueckgesetzt werden? Bit Nr.:",Byte2);scanf("%d",&BitNr);
		printf("Das Byte nach Setzen von Bit Nr. %d: %Xh\n\n",BitNr,Byte2=Byte2&~(1<<BitNr));
		
		printf("Welches Bit im Byte %Xh soll invertiert werden? Bit Nr.:",Byte3);scanf("%d",&BitNr);
		printf("Das Byte nach Setzen von Bit Nr. %d: %Xh\n\n",BitNr,Byte3=Byte3^1<<BitNr);


system("pause"); 
return 0; 
} 

