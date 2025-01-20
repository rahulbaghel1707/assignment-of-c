#include<stdio.h>
#include<conio.h>

void main()
{
      int n,cube,square;
      clrscr();
      printf("\nEnter N :");
      scanf("%d",&n);

      square=n*n;
      cube=n*n*n;

      printf("\nSquare of number %d :",square);
      printf("\ncube of number %d :",cube);
      getch();
}

