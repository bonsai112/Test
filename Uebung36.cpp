#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
	int isek;
	double dstart,dfinish,dduration=0;
	printf("Welche Zeitdauer meochten Sie schaetzen? \n\n");
	printf("T (in s) = ");
	scanf("%d", &isek);

	printf("\nVersuchen Sie nun, diese Zeit mit zwei aufein-\n");
	printf("anderfolgenden Tastenbetaetigungen zu stoppen!\n\n");
	
	getch();
	
	dstart=clock();
	
	while ( !_kbhit() && (dduration < 2*isek) )
	{
		dfinish = (double)clock();
		dduration = (double)(dfinish - dstart) / CLOCKS_PER_SEC;
	}

	if (dduration > 2*isek)
		printf("Eingeschlafen? ( Es sind %d s vergangen !) \n\n",2*isek);
	else
	{
	printf("Gestoppte Zeit: %.2lf s\n\n",dduration);

	printf("%.2lf",dduration/isek);
		if ((dduration/isek) >=0,9 && (dduration/isek) <=1 )
			printf("Gut geschaetzt!\nSchaetzzeit nur um %.2lf %% unterschritten\n",100-(dduration/isek)*100);
		if ((dduration/isek) <=1,1 && (dduration/isek) >=1 )
			printf("Gut geschaetzt!\nSchaetzzeit nur um %.2lf %% ueberschritten\n",(dduration/isek)*100-100);
		
	


	}
	while ( kbhit() ) getch();
	system("pause");
	getch();
	return 0;
}

