// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *intPtr;
//     char *charPtr;
//     float *floatPtr;

//     intPtr = (int *)malloc(sizeof(int));
//     charPtr = (char *)malloc(sizeof(char));
//     floatPtr = (float *)malloc(sizeof(float));

//     *intPtr = 42;
//     *charPtr = 'A';
//     *floatPtr = 3.14f;

//     printf("Int,Char,Float: %d\n%c\n%0.2f", *intPtr, *charPtr, *floatPtr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n;
//   int *arr;

//   printf("Enter the number of elements of array: ");
//   scanf("%d",&n);

//   arr = (int *)malloc(n * sizeof(int));

//   for (int  i = 0; i < n; i++){
//     printf("Enter %d element: ",i+1);
//     scanf("%d",&arr[i]);
//   }
//   int largest = arr[0];
//   for (int i = 0; i < n; i++){
//     if (largest < arr[i]){
//       largest = arr[i];
//     }
//   }
//   printf("The largest is : %d", largest);
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n;
//   int *arr1;
//   int *arr2;
//   int *arr3;

  // printf("Enter the num of elements of array: ");
  // scanf("%d",&n);

//   arr1 = (int *)malloc(n * sizeof(int));
//   arr2 = (int *)malloc(n * sizeof(int));

  // for (int  i = 0; i < n; i++){
  //   printf("Enter %d element of array 1: ",i+1);
  //   scanf("%d",&arr1[i]);
  // }

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

int sum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the num of elements of array: ");
    scanf("%d",&n);

    int *arr = (int*)malloc(n * sizeof(int));
    
    for (int  i = 0; i < n; i++){
      printf("Enter %d element of array 1: ",i+1);
      scanf("%d",&arr[i]);
    }
    
    int sumof = 0;
    sumof = sum(arr, n);
    printf("The sum is: %d", sumof);
        return 0;
}
