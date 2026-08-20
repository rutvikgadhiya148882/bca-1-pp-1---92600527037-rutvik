//write a program that input salary.....

#include<stdio.h>
#include<conio.h>

void main()
{
    float salary, hra, ta, da, pf, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if (salary >= 5000) {
	hra = (salary * 5)/100;
	ta  = (salary * 6)/100;
	da  = (salary * 4)/100;
	pf  = (salary * 5)/100;
    } else {
	hra = (salary * 5)/100;
	ta  = (salary * 6)/100;
	da  = (salary * 4)/100;
	pf  = (salary * 5)/100;
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
