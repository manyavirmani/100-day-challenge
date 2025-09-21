//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/ 
#include <stdio.h>

int main() {
    int num, temp, binary = 0, place = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    temp = num;
    
        
    while (temp > 0) {
        binary = binary + (temp % 2) * place;
        temp = temp / 2;
        place = place * 10;
    }
    
    printf("Binary representation of %d is: %d\n", num, binary);
    
    return 0;
}