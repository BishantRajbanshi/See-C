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


#include <stdio.h>
#include <math.h>

double velocityCalc(double v, double u, double a, double t) {
    if (isnan(v))
        return u + a * t;
    else if (isnan(u))
        return v - a * t;
    else if (isnan(a))
        return (v - u) / t;
    else if (isnan(t))
        return (v - u) / a;
    else {
        printf("Error: \n");
        return NAN;
    }
}

int main() {
    double v = NAN;
    double u = 20;
    double a = 4;
    double t = 5;

    double calc = velocityCalc(v, u, a, t);
    if (!isnan(calc))
        printf("Calculated value: %.2f\n", calc);
    else
        printf("Calculation failed\n");

    return 0;
}
