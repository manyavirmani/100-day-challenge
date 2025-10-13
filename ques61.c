//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int i,n,num;
    printf("enter the size of array:");
    scanf("%d",&n); 
    int a[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
            printf("%d found at %d position",num ,i);
        
    } return 0;
}