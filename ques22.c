//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0) {
        printf("Invalid Cost Price! It should be greater than 0.\n");
        return 1;
    }

    float diff = sellingPrice - costPrice;

    if (diff > 0) {
        printf("Profit Percentage = %.2f%%\n", (diff / costPrice) * 100);
    } else if (diff < 0) {
        printf("Loss Percentage = %.2f%%\n", (-diff / costPrice) * 100);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}