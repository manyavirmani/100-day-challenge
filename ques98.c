//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main() {
    char name[100];
    int i = 0, last_space = -1;
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Name: %s", name);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            last_space = i;
        }
        i++;
    }
     printf("Result: ");
     i = 0;
    if ((name[0] >= 'A' && name[0] <= 'Z') || (name[0] >= 'a' && name[0] <= 'z')) {
        if (name[0] >= 'a' && name[0] <= 'z') {
            printf("%c. ", name[0] - 32);
        } else {
            printf("%c. ", name[0]);
        }
    }
    while (name[i] != '\0' && name[i] != '\n' && i < last_space) {
        if (name[i] == ' ') {
            if ((name[i+1] >= 'A' && name[i+1] <= 'Z') || (name[i+1] >= 'a' && name[i+1] <= 'z')) {
                if (i+1 < last_space) { 
                    if (name[i+1] >= 'a' && name[i+1] <= 'z') {
                        printf("%c. ", name[i+1] - 32);
                    } else {
                        printf("%c. ", name[i+1]);
                    }
                }
            }
        }
        i++;
    }
     if (last_space != -1) {
        for (i = last_space + 1; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    }
     printf("\n");
     return 0;
}