// #include <stdio.h>

// int main() {
//     int arr[5] = {3, 7, 1, 9, -2};
//     int smallest = arr[0], 
//     largest = arr[0];

//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > largest)
//             largest = arr[i];
//         else if (arr[i] < smallest)
//             smallest = arr[i];
//     }

//     printf("Smallest: %d\nLargest: %d\n", smallest, largest);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int compare(const void *a, const void *b) {
//     return (*(char *)a - *(char *)b);
// }

// int areAnagrams(char *s1, char *s2) {
//     if (strlen(s1) != strlen(s2)) {
//         return 0;
//     }

//     qsort(s1, strlen(s1), sizeof(char), compare);
//     qsort(s2, strlen(s2), sizeof(char), compare);

//     return strcmp(s1, s2) == 0;
// }

// int main() {
//     char s1[] = "listen";
//     char s2[] = "silent";

//     printf("%s\n", areAnagrams(s1, s2) ? "true" : "false");

//     return 0;
// }
 

// #include <stdio.h>

// void printUnique(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int isUnique = 1; 
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isUnique = 0; 
//                 break;
//             }
//         }
//         if (isUnique) {
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 4, 8, 4, 2, 4, 9, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Unique elements: ");
//     printUnique(arr, n);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[] = {64, 25, 12, 26, 13};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("Sorted Array in Ascending Order: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0, sum = 0;
    printf("Indices of numbers are: \n");

    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
            count++;
            sum += arr[i];
            printf("Index %d: %d\n", i, arr[i]);
        }
    }

    printf("\nCount of such numbers: %d\n", count);
    printf("Sum of such numbers: %d\n", sum);

    return 0;
}
