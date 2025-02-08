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
 
#include <stdio.h>

int main() {
    printf("Enter the word you want to change (Press Enter to exit):\n");

    while (1) {
        int c = getchar(); // Read a character
        
        if (c == '\n') {  // Stop when Enter is pressed
            break;
        }

        // Convert uppercase to lowercase manually
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;  // Convert uppercase to lowercase
        }

        printf("The output: %c\n", c);
    }

    return 0;
}
