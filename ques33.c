//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>   

int main() {
    int n, m, d, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;                 

    while (m != 0) {
        digits++;
        m /= 10;
    }

    m = n;                 
    while (m != 0) {
        d = m % 10;
        sum += (int)(pow(d, digits) + 0.5);
        m /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
