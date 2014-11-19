#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#define N 100


int main(void)
{
	int i,i2,ibel=0,ifrei=0;
	char ca[7][6]={	{'1','1','0','1','1','1'},
					{'1','1','1','0','1','1'},
					{'0','1','1','1','1','0'},
					{'0','0','1','1','0','x'},
					{'1','1','0','1','x','x'},
					{'1','1','0','0','x','x'},
					{'1','0','1','1','x','x'}};
	



printf("Belegungsplan fuer das PC-Labor\n");
printf("-------------------------------\n\n");
printf("                       Mo  Di  Mi  Do  Fr  Sa\n");


for(i=0;i<7;i++)
{
	printf("\n");
	

	switch(i)
	{

	case 0: printf("1.  08:00 - 09:30       ");break;
	case 1: printf("2.  09:50 - 11:20       ");break;
	case 2: printf("3.  12:00 - 12:30       ");break;
	case 3: printf("4.  13:45 - 15:15       ");break;
	case 4: printf("5.  15:30 - 17:00       ");break;
	case 5: printf("6.  17:15 - 18:45       ");break;
	case 6: printf("7.  19:00 - 20:30       ");break;
	}

 for(i2=0;i2<6;i2++)

	 printf("%c   ",ca[i][i2]);
	if(ca[i][i2]='1')
		ibel++;
	else
		ifrei++;

}
printf("\n\n");
printf("                        1 = belegt\n");
printf("                        0 = frei\n");
printf("                        x = nicht verfuegbar\n");
printf("\n\n");

printf("Anzahl der belegten Einheiten: %d\n",ibel);
printf("Anzahl der freien Einheiten: %d\n",ifrei);







	





	system("pause");
	return 0;
}

