// #include <stdio.h>
// #include <pthread.h>
// #include <unistd.h>

// void *threadOne(void *p) {
//     for (int i = 2; i < 250; i++) {
//         int isPrime = 1;
//         for (int count = 2; count * count <= i; count++) {
//             if (i % count == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime) {
//             printf("Thread one: %d\n", i);
//         }
//     }
//     return NULL;
// }

// void *threadTwo(void *p) {
//     for (int i = 250; i < 500; i++) {
//         int isPrime = 1;
//         for (int count = 2; count * count <= i; count++) {
//             if (i % count == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime) {
//             printf("Thread two: %d\n", i);
//         }
//     }
//     return NULL;
// }

// int main() {
//     pthread_t thrID1, thrID2;
//     pthread_create(&thrID1, NULL, threadOne, NULL);
//     pthread_create(&thrID2, NULL, threadTwo, NULL);
//     pthread_join(thrID1, NULL);
//     pthread_join(thrID2, NULL);
//     return 0;
// }

