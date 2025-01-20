#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50],str2[50];
	int l1,x;
	clrscr();
	printf("\nEnter a string 1 :");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);

	x=strcmp(str1,str2);
	if(x==0)
	{
		printf("\nString are palindrome");
	}
	else
	{
		printf("\nString are not palindrome");
	}
	getch();
}