#include<stdio.h>
#include<conio.h>

int main() {
    int quantity;
    float price, discount, total, finalAmount;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount (in %%): ");
    scanf("%f", &discount);

    total = quantity * price;
    finalAmount = total - (total * discount / 100);

    printf("Total Amount = %.2f\n", total);
    printf("Final Amount after Discount = %.2f\n", finalAmount);

    return 0;
}
