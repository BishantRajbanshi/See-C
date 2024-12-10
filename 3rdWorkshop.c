#include <stdio.h>

// void max(int *a, int *b) {
//     if (*a > *b) {
//         printf("The maximum number is: %d\n", *a);
//     } else {
//         printf("The maximum number is: %d\n", *b);
//     }
// }

// int main() {
//     int num1, num2;
    
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
    
//     max(&num1, &num2);
    
//     return 0;
// }



//  int main()
//  {
//      int n, count = 0, sum = 0;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements of the array: \n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 7 == 0)
//         {
//             if (arr[i] % 2 != 0 && arr[i] % 3 != 0)
//             {
//                 count++;
//                 sum += arr[i];
//             }
//         }
//     }

//     printf("Count of numbers divisible by 7 and not divisible by 2 and 3: %d\n", count);
//     printf("Sum of these numbers: %d\n", sum);

//     return 0;
// }



//  void searchElement(int arr[], int size, int element)
//  {
//      int found = 0;
//      for (int i = 0; i < size; i++)
//      {
//          if (arr[i] == element)
//          {
//              printf("Element %d found at index %d\n", element, i);
//              found = 1;
//              break;
//          }
//      }
//      if (!found)
//      {
//          printf("Element Not found\n");
//      }
//  }



// int main()
// {
//     int arr[] = {10, 5, 7, 91, 54, 24};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int element;
//     printf("Enter the element to search for: ");
//     scanf("%d", &element);

//     searchElement(arr, size, element);

//     return 0;
// }



// void findLargestAndSmallest(int arr[], int size, int *largest, int *smallest)
// {
//     *largest = arr[0];
//     *smallest = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > *largest)
//         {
//             *largest = arr[i];
//         }
//         if (arr[i] < *smallest)
//         {
//             *smallest = arr[i];
//         }
//     }
// }



// int main()
// {
//     int arr[3];

//     printf("Enter three integers: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int largest, smallest;

//     findLargestAndSmallest(arr, 3, &largest, &smallest);

//     printf("The largest number is: %d\n", largest);
//     printf("The smallest number is: %d\n", smallest);

//     return 0;
// }



// void swapNumbers(int *a, int *b, int *c)
// {
//     int temp = *a;
//     *a = *b;
//     *b = *c;
//     *c = temp;
// }

// int main()
// {
//     int num1, num2, num3;

//     printf("Enter three numbers: \n");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

//     swapNumbers(&num1, &num2, &num3);

//     printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

//     return 0;
// }




// #include <stdio.h>

// void calcOpe(int *a, int *b, int *c, int *sum, int *product, float *quotient, int *subtraction, int *min) {
//     *sum = *a + *b + *c;

//     *product = *a * *b * *c;

//     *quotient = (*a + *b + *c) / 3.0;

//     *subtraction = *a - *b - *c;

//     *min = *a;
//     if (*b < *min) *min = *b;
//     if (*c < *min) *min = *c;
// }

// int main() {
//     int num1, num2, num3;
//     int sum, product, subtraction, min;
//     float quotient;

    // printf("Enter three numbers:\n");
    // scanf("%d %d %d", &num1, &num2, &num3);

//     calcOpe(&num1, &num2, &num3, &sum, &product, &quotient, &subtraction, &min);

//     printf("Sum: %d\n", sum);
//     printf("Multiplication: %d\n", product);
//     printf("Quotient (average): %.2f\n", quotient);
//     printf("Subtraction: %d\n", subtraction);
//     printf("Minimum: %d\n", min);

//     return 0;
// }


//  int main()
//  {
//      int n, count = 0, sum = 0;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

    // printf("Enter %d elements of the array: \n", n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] % 5 == 0)
    //     {
//             if (arr[i] % 2 != 0 && arr[i] % 3 != 0)
            // {
//                 count++;
//                 sum += arr[i];
//             }
//         }
//     }

//     printf("Count of numbers divisible by 5 and not divisible by 2 and 3: %d\n", count);
//     printf("Sum of these numbers: %d\n", sum);

//     return 0;
// }



// // qns3
// void replace_with_five(int arr[], int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         arr[i] = 5;
//     }
// }

// int main()
// {
//     int n;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements in the array:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("\nArray before replacing elements with 5:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     replace_with_five(arr, n);

//     printf("\nArray after replacing elements with 5:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// void replace_elements(int arr[], int length, int value) {
//     for (int i = 0; i < length; i++) {
//         arr[i] = value;
//     }
// }

// int main() {
//     int n, replacement_value;

//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d elements in the array:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the value to replace each element in the array: ");
//     scanf("%d", &replacement_value);

//     replace_elements(arr, n, replacement_value);

//     printf("Array after replacing elements:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// void findminimum(int *num1, int *num2) {
//     if (*num1 < *num2) {
//         printf("The minimum number is: %d\n", *num1);
//     } else {
//         printf("The minimum number is: %d\n", *num2);
//     }
// }

// int main() {
//     int a,b;
//     printf("Enter two numbers:\n");
//     scanf("%d %d", &a, &b);
//     findminimum(&a, &b);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[] = {25, 45, 55, 75, 30, 20, 80};
//     int *ptr = arr;
//     int count = 0, sum = 0;
//     int length = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < length; i++) {
//         if (arr[i] % 5 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
//             count++;
//             sum += arr[i];
//         }
//     }

//     printf("Count of numbers divisible by 5 but not by 2 or 3: %d\n", count);
//     printf("Sum of those numbers: %d\n", sum);
//     printf("Address of pointer: %p\n", (void *)&ptr);
//     printf("Address of array: %p\n", (void *)arr);
//     printf("Address of first element: %p\n", (void *)&arr[0]);
    
//     return 0;
// }


// #include <stdio.h>

// void search_element(int arr[], int size, int element) {
//     int found = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             printf("Element %d found at index %d\n", element, i);
//             found = 1;
//             return;
//         }
//     }
//     if (!found) {
//         printf("Element Not found\n");
//     }
// }

// int main() {
//     int arr[] = {20, 15, 87, 71, 24, 34};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int element;

//     printf("Enter the element to search: ");
//     scanf("%d", &element);

//     search_element(arr, size, element);

//     return 0;
// }




// #include <stdio.h>

// void find_smallest_largest(int arr[], int size, int *smallest, int *largest) {
//     *smallest = arr[0];
//     *largest = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < *smallest) {
//             *smallest = arr[i];
//         }
//         if (arr[i] > *largest) {
//             *largest = arr[i];
//         }
//     }
// }

// int main() {
//     int arr[3];
//     int smallest, largest;

//     printf("Enter three integers:\n");
//     for (int i = 0; i < 3; i++) {
//         scanf("%d", &arr[i]);
//     }

//     find_smallest_largest(arr, 3, &smallest, &largest);

//     printf("Smallest number: %d\n", smallest);
//     printf("Largest number: %d\n", largest);

//     return 0;
// }




