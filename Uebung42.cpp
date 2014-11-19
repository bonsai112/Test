#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
	
	int i=0;

	printf("Bildschirm-Ersatzzeichen fuer die ASCII-Steuercodes 0 bis 31 \n\n");
	printf("ausser Zeichen Nr.   0 ( = NUL ),\n");
	printf("                     7 ( = BEL ),\n");
	printf("                     8 ( = BS  ),\n");
	printf("                     9 ( = TAB ),\n");
	printf("                    10 ( = LF  ),\n");
	printf("                    13 ( = CR  )\n\n");

	for (i=0;i<=31;i++)
		printf("%2d",i%10);
	
	
	printf("\n");

	for(i=0;i<=31;i++)
		if (i!=0 & i!=7 & i!=8 & i!=9 & i!=10 & i!=13)
		printf("%2c",i);
		else
			printf("  ");
	printf("\n");
	system("pause");
	getch();
	return 0;
}

