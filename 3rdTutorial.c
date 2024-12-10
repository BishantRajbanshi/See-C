#include <stdio.h>

// int main(){
  
  // int arr[100];
  // int n;
  // printf("Enter the number of array (1 to 100): ");
  // scanf("%d",&n);

  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter the number %d: ",i+1);
  //   scanf("%d",&arr[i]);
  // }
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[0] < arr[i])
//     {
//       arr[0] = arr[i];
//     }
//   }
//     printf("The largest number in array is : %d",arr[0]);
// }

// int main(){
  
//   int arr[100];
//   int n;
//   printf("Enter the number of array (1 to 100): ");
//   scanf("%d",&n);

//   for (int i = 0; i < n; i++)
//   {
//     printf("Enter the number %d: ",i+1);
//     scanf("%d",&arr[i]);
//   }

//   for (int i = 0; i < n; i++)
// {
//     for (int j = i; j < n; j++)
//     {
//         if (arr[i] > arr[j])
//         {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
// }

//   // for (int i = 0; i < n-1; i++)
//   // {
//   //   for (int j = 0; j < n-i-1; j++)
//   //   {
//   //     if (arr[j] > arr[j + 1])
//   //     {
//   //       int temp = arr[j];
//   //       arr[j] = arr[j + 1];
//   //       arr[j + 1] = temp;
//   //     }
//   //   } 
//   // }

//     printf("The sorted array in ascending order is:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
//     return 0;
// }

  

// int cal_sum(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[100];
//     int n;

//     printf("Enter the number of elements in the array (1 to 100): ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     int total = cal_sum(arr, n);
//     printf("The sum of the array is: %d\n", total);

//     return 0;
// }


// qns4
//  int main(){
//      int numbers[2][3] = {{1,2,3},{4,5,6}};
//      int sum = 0;
//      for (int i = 0; i < 2; i++)
//      {
//          for (int j = 0;  j < 3; j++)
//          {
//              sum += numbers[i][j];
//          }
//      }
//      printf("the sum is: %d", sum);
//  }

// qns5
//  int main(){
//      char names[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Fiday", "Saturday"};
//      for (int i = 0; i < 7; i++)
//      {
//         printf("%s \n", names[i]);
//      }
//  }

// qns6
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("before swap: %d %d \n", a, b);
//     swap(&a, &b);
//     printf("after swap: %d %d", a, b);

//     return 0;
// }