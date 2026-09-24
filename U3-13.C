#include<stdio.h>
#include<conio.h>

void main()
{
    double num1, num2, num3, max;


    printf("Enter three values separated by spaces: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);


    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    } else
    {
        max = num3;
    }


    printf("The maximum value is: %.2lf\n", max);

    return 0;
}
