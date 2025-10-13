//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {  
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n]; 
    printf("Enter elements:",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pcount = 0;
    int ncount = 0;
    int zcount = 0;
    for (i=0;i<n;i++)
    {
        if (a[i]>0)
            pcount++;
        else if (a[i]<0)
            ncount++;
        else
            zcount++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pcount, ncount, zcount);
    return 0;
}