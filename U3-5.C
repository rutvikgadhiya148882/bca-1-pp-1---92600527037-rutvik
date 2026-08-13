#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("Both numbers are Equal");
    else
        printf("Both numbers are Not Equal");

    return 0;
}
