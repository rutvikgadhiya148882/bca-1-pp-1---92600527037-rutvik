#include<stdio.h>
#include<conio.h>

void main()
{
    int rollNo;
    float marks[5], total = 0, percentage;
    int i, isPass = 1;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if(marks[i] < 40)
        {
            isPass = 0;
        }
        total += marks[i];
    }

    percentage = total / 5.0;

    if (!isPass)
    {
        grade = 'F';
    } else if (percentage >= 90)
    {
        grade = 'A';
    } else if (percentage >= 80)
    {
        grade = 'B';
    } else if (percentage >= 70)
    {
        grade = 'C';
    } else if (percentage >= 60)
    {
        grade = 'D';
    } else
    {
        grade = 'E';
    }
    printf("\n--- Student Report Card ---\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Total Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (isPass)
    {
        printf("Result      : PASS\n");
    } else
    {
        printf("Result      : FAIL\n");
    }

    printf("Grade       : %c\n", grade);

    getch();
}
