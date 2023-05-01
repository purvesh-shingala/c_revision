#include<stdio.h>
#include<conio.h>

main()
{

	float cel,fer;
	clrscr();
	printf("ENTER TEMP IN CEL = ");
	scanf("%f",&cel);

	fer=(cel*9/5)+32;
	printf("TEMP IN FER IS : %f",fer);
	getch();
}