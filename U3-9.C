#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2;

    // Prompt user for inputs
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Prevent division by zero error
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    // Check if remainder is 0
    else if (num1 % num2 == 0)
    {
        printf("%d is divisible by %d.\n", num1, num2);
    }
    else
    {
        printf("%d is not divisible by %d.\n", num1, num2);
    }

    getch();
}
