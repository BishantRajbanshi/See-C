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

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *arr;

  printf("Enter the number of elements of array: ");
  scanf("%d",&n);

  arr = (int *)malloc(n * sizeof(int));

  for (int  i = 0; i < n; i++){
    printf("Enter %d element: ",i+1);
    scanf("%d",&arr[i]);
  }

  


}