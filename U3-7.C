//Write a C Program to input price quantity......

#include<stdio.h>
#include<conio.h>

void main()
{
    float price, total, final_payment;
    int quantity;

    // Input item details from the user
    printf("Enter price per unit: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Calculate total cost
    total = price * quantity;

    // Condition: Apply 10% discount if total exceeds 1000
    if (total > 1000) {
        final_payment = total - (total * 0.10);
        printf("10%% discount applied.\n");
    } else {
        final_payment = total;
        printf("No discount applied.\n");
    }

    // Display final payment
    printf("Total Amount: $%.2f\n", total);
    printf("Final Payment: $%.2f\n", final_payment);

    getch();
}
