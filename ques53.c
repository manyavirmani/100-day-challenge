/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int l;
    printf("enter the number:");
    scanf("%d",&l);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=l;i>=1;i--)
    {
        for(int j=2*i-1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}