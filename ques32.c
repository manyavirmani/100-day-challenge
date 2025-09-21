//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int num,rev=0,temp,d;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
        }
        
        if(rev==temp){
            printf("Palindrome");
        }
        else{
            printf("Not palindrome");
        }
    
    return 0;
}