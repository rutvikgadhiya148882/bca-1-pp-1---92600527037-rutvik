//display ascii code of input character
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();
	printf("\n enter any character : ");
	scanf("%c" ,&x); //a = 65

	printf("\n input character is : %c" ,x-32);
	printf("\n ascii code is : %d" ,x-32);
	getch();

}
