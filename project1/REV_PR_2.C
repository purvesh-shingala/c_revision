#include<stdio.h>
#include<conio.h>

main()
{
	int base_salary,hra,da,ta,gross_salary;
	clrscr();
	printf("ENTER BASE SALARY = ");
	scanf("%d",&base_salary);

	printf("ENTER HRA = ");
	scanf("%d",&hra);

	printf("ENTER DA =");
	scanf("%d",&da);

	printf("ENTER TA = ");
	scanf("%d",&ta);


	gross_salary=base_salary+hra+da+ta;
	printf("GRPOSS SALARY = %d",gross_salary);
	getch();
}