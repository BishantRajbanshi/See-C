#include <stdio.h>

void find_smallest_largest(int arr[], int size, int *smallest, int *largest) {
    *smallest = arr[0];
    *largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
    }
}

int main() {
    int arr[3];
    int smallest, largest;

    printf("Enter three integers:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    find_smallest_largest(arr, 3, &smallest, &largest);

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}
