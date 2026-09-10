#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is an UPPERCASE letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is a LOWERCASE letter.\n", ch);
    }
    else
    {
	printf("'%c' is not an alphabetic letter.\n", ch);
    }

	getch();

}
