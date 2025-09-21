//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main()
{
    int n,c=0,i=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0)
        c++;
        i++;
    }
        if(c==2)
        printf("%d is a prime number",n);
        else 
        printf("%d is not prime number",n);

        return 0;

 }
