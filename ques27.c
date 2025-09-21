//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
           sum=sum+i;
         }
          printf("sum=%d",sum);
    return 0;
}