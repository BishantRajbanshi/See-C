#include <stdio.h>
#include <math.h>

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int a, b;
//     printf("Enter the value of a and b for addition: ");
//     scanf("%d %d", &a, &b);
//     printf("The value is: %d", add(a, b));
//     return 0;
// }


// int square(int a){
//   return a*a;
// }

// int main(){
//   int a;
//   printf("Enter the number you wnt square of :");
//   scanf("%d",&a);

//   printf("The square is :%d", square(a));
// }


// void swap(int *a, int *b) {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }

// int main() {
//     int a, b;
//     printf("Enter the value of a and b: ");
//     scanf("%d %d", &a, &b);
    
//     swap(&a, &b);
    
//     printf("After swapping: a = %d, b = %d\n", a, b);
// }


// int IsEven(int a){
//   if (a % 2 == 0)
//   {
//     printf("Its even");
//   }else{
//     printf("Its odd");
//   }
// }

// int main(){
//   int a;
//   printf("Enter the number you want to check:");
//   scanf("%d",&a);
//   IsEven(a);
// }

// int convToBi(int a){

// }


// long convToBi(int d)
// {
//     long b=0,remainder,f=1;
//     while(d != 0)
//     {
//          remainder = d % 2;
//          b = b + remainder * f;
//          f = f * 10;
//          d = d / 2;
//     }
//     return b;
// }

// int main()
// {
//   long b;
//   int d;

//   printf("Input any decimal number : ");
//   scanf("%d",&d);

//   b = convToBi(d);
//   printf("The Binary value is : %ld",b);
// }



// int IsPrime(int a) {
//     if (a <= 1) {
//         return 0;
//     }
//     for (int i = 2; i * i <= a; i++) {
//         if (a % i == 0) {
//             return 0;  
//         }
//     }
//     return 1;
// }

// int main() {
//     int a;
//     printf("Input any number: ");
//     scanf("%d", &a);
    
//     if (IsPrime(a)) {
//         printf("Is prime\n");
//     } else {
//         printf("It's not prime\n");
//     }
//     return 0;
// }



// int isArmstrong(int num) {
//     int sum = 0, temp, remainder, digits = 0;

//     temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         digits++;
//     }

//     temp = num;
//     while (temp != 0) {
//         remainder = temp % 10;
//         sum += pow(remainder, digits);
//         temp /= 10;
//     }

//     return sum == num;
// }

// int isPerfect(int num) {
//     int sum = 0;

//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     return sum == num;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isArmstrong(num)) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     if (isPerfect(num)) {
//         printf("%d is a Perfect number.\n", num);
//     } else {
//         printf("%d is not a Perfect number.\n", num);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     char ch;

//     // Prompt the user
//     printf("Enter characters (press Enter to stop):\n");

//     // Infinite loop to continuously take input
//     while (1) {
//         scanf("%c", &ch); // Read a character

//         // Check if Enter key is pressed (newline character)
//         if (ch == '\n') {
//             printf("Enter key has been pressed.\n");
//             break; // Exit the loop
//         }

//         // Check if the character is an uppercase letter
//         if (ch >= 'A' && ch <= 'Z') {
//             ch = ch + 32; // Convert to lowercase
//         }

//         // Print the processed character
//         printf("%c\n", ch);
//     }

//     return 0; // End the program
// }


// int main() {
//     int n;

//     printf("Enter the n up to which triangular numbers should be printed: ");
//     scanf("%d", &n);

//     int i = 1;
//     while (1) {
//         int triangularNumber = (i * (i + 1)) / 2; 

//         if (triangularNumber > n) {
//             break;
//         }
//         printf("%d ", triangularNumber);
//         i++;
//     }

//     return 0;
// }


