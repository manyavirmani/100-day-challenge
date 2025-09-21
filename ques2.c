//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int num1,num2,sum,diff,pro,quo;
    printf("enter the numbers");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    diff=num1-num2;
    pro=num1*num2;
    quo=num1/num2;
     printf("the sum of the numbers is %d \n",sum);
     printf("the difference of the numbers is %d \n",diff);
     printf("the product of the numbers is %d \n",pro);
     printf("the quotient of the numbers is %d \n",quo);
     return 0;
}
