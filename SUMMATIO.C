#include<stdio.h>
#include<conio.h>
void main()
{
      long num,sum=0;
      clrscr();
      printf("\nEnter Number :");
      scanf("%ld",&num);

      while(num!=0)
      {
	   sum=sum+(num %10);
	   num=num/10;
      }
      printf("\nSum of digits : %ld",sum);
      getch();
}