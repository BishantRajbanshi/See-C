// #include <stdio.h>
// #include <math.h>

// double cube(double num) {
//     return pow(num, 3);
// }

// int main() {
//     double num;
//     printf("Enter a number: ");
//     scanf("%lf", &num);

//     printf("The cube of %.2f is %.2f", num, cube(num));

//     return 0;
// }

// #include <stdio.h>

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int firstNum, secondNum;

//     printf("Enter two numbers (separated by space): ");
//     scanf("%d %d", &firstNum, &secondNum);

//     printf("Before swapping: First = %d, Second = %d\n", firstNum, secondNum);

//     swap(&firstNum, &secondNum);

//     printf("After swapping: First = %d, Second = %d\n", firstNum, secondNum);

//     return 0;
// }

// void swap (int *x, int *y){
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }


// #include <stdio.h>

// void midpoint(double x1, double y1, double x2, double y2) {
//     double xmid = (x1 + x2) / 2.0;
//     double ymid = (y1 + y2) / 2.0;
//     printf("Midpoint coordinates: (%.2f, %.2f)\n", xmid, ymid);
// }

// int main() {
//     midpoint(1,2,3,4);
//     midpoint(2.5, 6.1, 7.0, 8.0);
//     return 0;
// }


// #include <stdio.h>

// int isArmstrong(int num) {
//     int d, sum = 0;
//     int n = num;

//     while (n != 0) {
//         d = n % 10;
//         sum += d * d * d;
//         n /= 10;
//     }
//     if (num == sum)
//         return 1;
//     else
//         return 0;
// }

// int isPerfect(int num) {
//     int sum = 0;
//     for (int i = 1; i < num; i++) {
//         if (num % i == 0)
//             sum += i;
//     }
//     if (sum == num)
//         return 1;
//     else
//         return 0;
// }

// int main() {
//     int num;
//     printf("Enter a number to check: ");
//     scanf("%d", &num);

//     if (isArmstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     if (isPerfect(num))
//         printf("%d is a Perfect number.\n", num);
//     else
//         printf("%d is not a Perfect number.\n", num);

//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// double velocityCalc(double v, double u, double a, double t) {
//     int nanCount = 0;

//     if (isnan(v)) nanCount++;
//     if (isnan(u)) nanCount++;
//     if (isnan(a)) nanCount++;
//     if (isnan(t)) nanCount++;

//     if (nanCount > 1) {
//         printf("Error: More than one variable cannot be NAN.\n");
//         return NAN;
//     }

//     if (isnan(v))
//         return u + a * t;
//     else if (isnan(u))
//         return v - a * t;
//     else if (isnan(a))
//         return (v - u) / t;
//     else if (isnan(t))
//         return (v - u) / a;
//     else {
//         printf("Error: No variable is NAN.\n");
//         return NAN;
//     }
// }

// int main() {
//     double v, u, a, t;
//     int choice;

//     printf("Enter the variable to calculate (1 for v, 2 for u, 3 for a, 4 for t): ");
//     scanf("%d", &choice);

//     v = u = a = t = NAN;

// switch (choice) {
//     case 1: 
//         printf("Enter initial velocity (u), acceleration (a), and time (t): ");
//         scanf("%lf %lf %lf", &u, &a, &t);
//         break;
        
//     case 2: 
//         printf("Enter final velocity (v), acceleration (a), and time (t): ");
//         scanf("%lf %lf %lf", &v, &a, &t);
//         break;
        
//     case 3: 
//         printf("Enter final velocity (v), initial velocity (u), and time (t): ");
//         scanf("%lf %lf %lf", &v, &u, &t);
//         break;
        
//     case 4: 
//         printf("Enter final velocity (v), initial velocity (u), and acceleration (a): ");
//         scanf("%lf %lf %lf", &v, &u, &a);
//         break;
        
//     default:
//         printf("Invalid choice.\n");
//         return 0;
// }


//     double result = velocityCalc(v, u, a, t);
//     if (!isnan(result)) {
//         switch (choice) {
//             case 1: 
//             printf("Final velocity (v) = %.2f\n", result); 
//             break;
//             case 2: 
//             printf("Initial velocity (u) = %.2f\n", result); 
//             break;
//             case 3: 
//             printf("Acceleration (a) = %.2f\n", result); 
//             break;
//             case 4: 
//             printf("Time (t) = %.2f\n", result); 
//             break;
//         }
//     } else {
//         printf("Calculation failed due to invalid input.\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// void equations(double a, double b, double c, double d, double e, double f) {
//     double x, y;
//     double det = a * e - b * d;

//     if (det == 0) {
//         printf("The equations have no unique solutions\n");
//         return;
//     }

//     x = (c * e - b * f) / det;
//     y = (a * f - c * d) / det;

//     printf("The solution is: x = %.2f, y = %.2f\n", x, y);
// }

// int main() {
//     equations(5,4,7,-9,8,5);
//     return 0;
// }
