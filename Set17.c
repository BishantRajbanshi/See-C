#include <stdio.h>
#include <math.h>

void isArmstrong(int n) {
    int originalNum = n, sum = 0, temp, remainder, d = 0;

    // Count number of digits
    temp = n;
    while (temp != 0) {
        temp /= 10;
        d++;
    }

    // Calculate Armstrong sum
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += (int)pow(remainder, d); // Use 'd' instead of 3
        temp /= 10;
    }

    // Check if Armstrong number
    if (sum == originalNum)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");
}



void isPerfect(int num) {
    int sum = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("It is a Perfect number.\n");
    else
        printf("It is not a Perfect number.\n");
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    isArmstrong(n);
    isPerfect(n);

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, a, *arr;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     arr = (int*)malloc(n * sizeof(int));

//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the num to add: ");
//     scanf("%d", &a);

//     arr = (int*)realloc(arr, (n + 1) * sizeof(int));

//     printf("Enter the element: ");
//     scanf("%d", &arr[n]);

//     printf("The elements are: ");
//     for (int i = 0; i < (n + 1); i++) {
//         printf("%d ", arr[i]);
//     }
//     free(arr);
// }
