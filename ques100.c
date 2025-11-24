//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
int main() {
    char str[100];
    int length = 0, i, j, k;
     printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
     printf("String: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("Length: %d\n", length);
    printf("\nAll substrings:\n");
     int count = 0;
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            count++;
            printf("%d. ", count);
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    
    printf("\nTotal substrings: %d\n", count);
    
    return 0;
}