
#include <stdio.h>

void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int isUnique = 1; 
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; 
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 8, 4, 2, 4, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements: ");
    printUnique(arr, n);

    return 0;
}

