//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n]; 
    printf("Enter elements:",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max =a[0];
    int min =a[0];
    for (i=1;i<n;i++)
    {
        if (a[i] > max)
            max=a[i];
        if (a[i] < min)
            min=a[i];
    }
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}