//write a program that input salary.....

#include<stdio.h>
#include<conio.h>

void main()
{
    float salary, hra, ta, da, pf, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if (salary >= 5000) {
        hra = 0.05f * salary; // 5%
        ta  = 0.06f * salary; // 6%
        da  = 0.04f * salary; // 4%
        pf  = 0.05f * salary; // 5%
    } else {
        hra = 0.04f * salary; // 4%
        ta  = 0.05f * salary; // 5%
        da  = 0.03f * salary; // 3%
        pf  = 0.04f * salary; // 4%
    }

    gross_salary = salary + hra + ta + da - pf;

    printf("\n--- Salary Breakdown ---\n");
    printf("HRA:          %.2f\n", hra);
    printf("TA:           %.2f\n", ta);
    printf("DA:           %.2f\n", da);
    printf("PF:           %.2f\n", pf);
    printf("Gross Salary: %.2f\n", gross_salary);

    getch();
}
