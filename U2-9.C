#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	printf("enter the valuue of x :");
	scanf("%d",x);

	printf("enter the valuue of y :");
	scanf("%d",y);

	x=x+y;
	y=x-y;
	z=x-y;

	printf("\n interchange value is :",x,y);
	getch();
}