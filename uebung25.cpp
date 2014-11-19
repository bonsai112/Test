#define _USE_MATH_DEFINES
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <conio.h> 



int main( void) 
{ 
	char taste;

	printf("Bitte einen der ASCII-Codewerte 3,4,5,6 eingeben: ");
	taste = getche();
	if (taste == '3' || taste == '4' || taste == '5' || taste == '6')
	{
		printf("\nCodewert: %c\n",taste);
		if (taste == '3' || taste == '4')
			printf("\nDas zugehoerige Spielkartensymbol ist: %c rot\n",taste-48);
		else
			printf("\nDas zugehörige Spielkartensymbol ist: %c schwarz\n",taste-48);

	}
	else
		printf("\nUngueltige Eingabe");




system("pause"); 
return 0; 
} 