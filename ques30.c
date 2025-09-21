//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int num,rev=0,d;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
     printf("Reverse of the number is: %d",rev);
    return 0;
}