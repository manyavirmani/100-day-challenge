//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
    int l,b,ar,peri;
    printf("enter the length and bredth");
    scanf("%d%d",&l,&b);
    ar=l*b;
    peri=2*(l+b);
    printf("the area of rectangle is %d \n",ar);
    printf("the perimeter of rectangle is %d",peri);
    return 0;
}

