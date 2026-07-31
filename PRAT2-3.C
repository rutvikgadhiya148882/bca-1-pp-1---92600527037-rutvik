#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c,d;
    clrscr();

    printf("Enter Principal Amount: ");
    scanf("%f", &a);

    printf("\n Enter Rate of Interest: ");
    scanf("%f", &b);

    printf("\n Enter Number of Years: ");
    scanf("%f", &c);

    d = (a * b * c) / 100;

    printf("Simple Interest = %.2f \n", d);


    getch();
    return 0;
}
