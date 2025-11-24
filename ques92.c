//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main() {
    char str[100];
    int i, j;
    char first_repeat = '\0';
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("String: %s", str);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
                if (str[i] == str[j]) {
                    first_repeat = str[i];
                    break;
                }
            }
            if (first_repeat != '\0') {
                break;
            }
        }
    }
    
    if (first_repeat != '\0') {
        printf("First repeating lowercase alphabet: '%c'\n", first_repeat);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }
    
    return 0;
}