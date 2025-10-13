//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main() 
{
    int i,n,temp;
    printf("enter the size of array:");
    scanf("%d",&n); 
    int a[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("reversed array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}