//write a program input that...

#include<stdio.h>
#include<conio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Person is eligible for vote.\n");
    else
        printf("Person is not eligible for vote.\n");

    return 0;
}
