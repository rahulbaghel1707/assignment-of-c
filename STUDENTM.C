#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,total;
	double per;
	clrscr();
	printf("\nEnter s1 marks of : ");
	scanf("%d",&s1);
	printf("\nEnter s2 marks of : ");
	scanf("%d",&s2);
	printf("\nEnter s3 marks of : ");
	scanf("%d",&s3);
	printf("\nEnter s4 marks of : ");
	scanf("%d",&s4);
	printf("\nEnter s5 marks of : ");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("\ntotal : %d",total);
	printf("\npercentage : %lf",per);
	if(per>=70)
	{
	    printf("\nDistinction");
	}
	else if(per>=60)
	{
	    printf("\nFirst Class");
	}
	else if(per>=50)
	{
	   printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass Class");
	}
	else
	{
	   printf("\nper you are fail");
	}
	getch();
}