#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
	
	int i=0;

	printf("Bit Wertigkeiten im Byte:\n\n");

	printf("Bit Nr.:  ");
	for (i=7;i>=0;i--)
		printf("%3d",i);
	printf("\n");
	printf("Bitwert:  ");

	for(i=7;i>=0;i--)
		printf("%3d",1<<i);
	printf("\n");
	system("pause");
	getch();
	return 0;
}

