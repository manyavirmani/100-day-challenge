//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()  
{
    int i,n1,n2;
    printf("enter the size of first array:");
    scanf("%d",&n1); 
    int a[n1];
    printf("enter the size of second array:");
    scanf("%d",&n2); 
    int b[n2];
  
    printf("enter the elements of first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("merged array is:");
    for(i=0;i<n1;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n2;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}