#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *str1,*str2;
	clrscr();
	printf("\nEnter string 1 :");
	gets(str1);
	printf("\nEnter string 2 :");
	gets(str2);
	strcat(str1,str2);
	printf("\nafter concation string is %s",str1);
	getch();
}