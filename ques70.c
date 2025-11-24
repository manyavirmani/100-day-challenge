//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, i, k;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
y
    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}