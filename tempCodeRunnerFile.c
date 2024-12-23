#include <stdio.h>
#include <stdlib.h>

void sum(int *n) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *n;
        n++;
    }
    printf("\nThe sum is: %d", sum);
}
int main() {
    int *parr = (int *)malloc(5 * sizeof(int));
    if (parr == NULL) {
        printf("Memory allocation unsuccessful");
        exit(0);
    }

    for (int i = 0; i < 5; i++) {
        parr[i] = i + 1;
        printf("\n%d", parr[i]);
    }
    sum(parr);
    free(parr);
    return 0;
}

