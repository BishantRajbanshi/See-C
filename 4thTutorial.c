#include <stdio.h>
#include <stdlib.h>

void storeAndPrintElements(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!!!!!!!!!!!!!\n");
        return;
    }

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    printf("Elements in the array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr); 
}

void computeSum(int n) {
    int *arr = (int *)calloc(n , sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed!!!!!!!!!!!!!\n");
        return;
    }

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    printf("Sum of all elements: %d\n", sum);

    free(arr); 
}

void searchElement(int n) {
    int *arr = (int *)malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed!!!!!!!!!!!!!\n");
        return;
    }

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == target) {
            printf("Element %d found at position: %d (0-based index)\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }
    free(arr);
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    storeAndPrintElements(n);

    printf("\nCompute Sum of Elements\n");
    computeSum(n);

    printf("\nSearch an Element\n");
    searchElement(n);

    return 0;
}
