//wap which displays sum of numbers
#include<stdio.h>
#include<canio.h>

void main()

{
	int x,y,z; 	//variable declaration
	clrscr();
	printf("\n enter value of x");
	scanf(%d,&x);

	printf("\n enter value of y");
	scanf(%d,&y);

	z=x+y;
	printf("\n %d is the answer:",z);
	//	printf("\n%d+%d=%d"x,y,z);

	getch();
}