/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        printf(" ");
        printf("\n");
    }
        for(int k=3;k>=1;k-=2)
        {
        for(int l=1;l<=k;l++)
        {
        printf("* \n");
        }
        printf(" ");
        printf("\n");
        }
    
    return 0;
}


    