// #include <stdio.h>
// #include <stdlib.h>

// void sum(int *n) {
//     int sum = 0;
//     for (int i = 0; i < 5; i++) {
//         sum += *n;
//         n++;
//     }
//     printf("\nThe sum is: %d", sum);
// }
// int main() {
//     int *parr = (int *)malloc(5 * sizeof(int));
//     if (parr == NULL) {
//         printf("Memory allocation unsuccessful");
//         exit(0);
//     }

//     for (int i = 0; i < 5; i++) {
//         parr[i] = i + 1;
//         printf("\n%d", parr[i]);
//     }
//     sum(parr);
//     free(parr);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// void searchTarget(int *num, int target) {
//     int count = 0;
//     for (int i = 0; i < 5; i++) {
//         if (*num == target) {
//             count++;
//         }
//         num++;
//     }
//     if (count >= 1) {
//         printf("\nThe number is present\n");
//     } else {
//         printf("\nThe number is not present\n");
//     }
// }

// int main() {
//     int *parr = (int *)malloc(5 * sizeof(int));
//     if (parr == NULL) {
//         printf("Allocation failed\n");
//         exit(0);
//     }

//     for (int i = 0; i < 5; i++) {
//         parr[i] = i * 2 ;
//         printf("%d ", parr[i]);
//     }
//     searchTarget(parr, 4);
//     free(parr);
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n;
//   int *arr1,*arr2,*arr3;

//   printf("Enter the num of elements of array: ");
//   scanf("%d",&n);

//   arr1 = (int *)malloc(n * sizeof(int));
//   arr2 = (int *)malloc(n * sizeof(int));

//   for (int  i = 0; i < n; i++){
//     printf("Enter %d element of array 1: ",i+1);
//     scanf("%d",&arr1[i]);
//   }

//   for (int  i = 0; i < n; i++){
//     printf("Enter %d element of array 2: ",i+1);
//     scanf("%d",&arr2[i]);
//   }
  
//   for (int i = 0; i < n; i++)
//   {
//     arr3[i] = arr1[i]+ arr2[i];
//     printf("The sum is :%d\n",arr3[i]);
//   }
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    printf("Enter the num of elements of array: ");
    scanf("%d", &num1);

    int *arr = (int *)malloc(num1 * sizeof(int));
    for (int i = 0; i < num1; i++) {
        printf("Element-%d : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter additional num of elements: ");
    scanf("%d", &num2);
    num1 += num2;

    arr = (int *)realloc(arr, num1 * sizeof(int));
    for (int i = 0; i < num2; i++) {
        printf("Element-%d : ", i);
        scanf("%d", &arr[num1 - num2 + i]);
    }

    for (int i = 0; i < num1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
