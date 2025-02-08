// #include <stdio.h>

// void printTriangularNumbers(int n) {
//     for (int i = 1; i <= n; i++) {
//         int triangularNumber = (i * (i + 1)) / 2;
//         printf("T(%d) = %d\n", i, triangularNumber);
//     }
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Triangular numbers from 1 to %d are:\n", n);
//     printTriangularNumbers(n);

//     return 0;
// }


// #include <stdio.h>

// int sum_of_digits(int number) {
//     int sum = 0;
//     // Loop through each digit of the number
//     while (number != 0) {
//         sum += number % 10; // Add the last digit to the sum
//         number /= 10;       // Remove the last digit
//     }
//     return sum;
// }

// #include <stdio.h>

// int sum_of_digits(int number){
//  int sum = 0;
//  while (number != 0 ){
//   sum += number % 10;
//   number /= 10;
//  }
//  return sum;
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int result = sum_of_digits(number);
//     printf("The sum of the digits is: %d\n", result);

//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h> // For tolower function

// int main() {
//     char ch;
//     printf("Enter characters (Press Enter to stop): \n");
    
//     while (1) {
//         ch = getchar(); // Read a character
        
//         if (ch == '\n') // Stop if Enter is pressed
//             break;
        
//         printf("%c", tolower(ch)); // Convert to lowercase and print
//     }
    
//     printf("\n");
//     return 0;
// }


// #include <stdio.h>

// int main(){
//   for (int i = 4; i >= 0; i--)
//   {
//     for (int j = i; j >= 0; j--)
//     {
//       // printf("*");
//     printf("%c",65+j);
//     }
//     printf("\n");
//   }
  
// }
 
// #include <stdio.h>

// int main() {
//     printf("Enter the word you want to change (Press Enter to exit):\n");

//     while (1) {
//         int c = getchar(); // Read a character
        
//         if (c == '\n') {  // Stop when Enter is pressed
//             break;
//         }

//         // Convert uppercase to lowercase manually
//         if (c >= 'A' && c <= 'Z') {
//             c = c + 32;  // Convert uppercase to lowercase
//         }

//         printf("The output: %c\n", c);
//     }

//     return 0;
// }


// #include <stdio.h>

// void *swap( int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("%d %d",a,b);

// }

// #include<stdio.h>

// int main() {
//     int arr[] = {1, 5, 4, 7, 8, 9, 6, 5, 2, 70};
//     int arr1[10] = {0};  // Initialize with zeros
//     int smallest = arr[0], largest = arr[0];  // Initialize properly

//     // Find smallest and largest
//     for (int i = 1; i < 10; i++) {
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     printf("Smallest: %d , Largest: %d \n", smallest, largest);

//     // Copy increasing sequence (Fix the logic)
//     int index = 0;
//     arr1[index++] = arr[0];
    
//     for (int i = 1; i < 10; i++) {
//         if (arr[i] > arr[i-1]) {  
//             arr1[index++] = arr[i];
//         }
//     }  

//     // Print filtered array
//     printf("Filtered Array: ");
//     for (int i = 0; i < index; i++) {
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the space:");
    scanf("%d",&n);
    int *a = (int*)malloc(n * sizeof(int*));



}


}