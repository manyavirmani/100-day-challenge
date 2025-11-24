//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
int main() {
    char str1[100], str2[100], combined[200];
    int len1 = 0, len2 = 0, i, j, found = 0;
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        len2++;
    } 
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    if (len1 != len2) {
        printf("Strings are not rotations (different lengths)\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        combined[i] = str1[i];
    }
    for (i = 0; i < len1; i++) {
        combined[len1 + i] = str1[i];
    }
    combined[2 * len1] = '\0';
    for (i = 0; i <= len1; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j]) {
                found = 0;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    if (found == 1) {
        printf("Second string is a rotation of first string\n");
    } else {
        printf("Second string is not a rotation of first string\n");
    }
     return 0;
}