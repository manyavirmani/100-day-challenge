//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main()
{
    float r,ar,cir;
    printf("enter the radius of circle");
    scanf("%f",&r);
    ar=3.14*r*r;
    cir=2*3.14*r;
    printf("the area of circle is %.2f \n",ar);
    printf("the circumference of circle is %.2f \n",cir);
    return 0;
}