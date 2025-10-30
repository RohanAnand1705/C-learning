#include <stdio.h>
#include <stdlib.h>

int printEvenDigitsHelper(long long n) {
    /* Recursively process left digits first so output keeps original order.
       Returns how many even digits were printed. */
    if (n == 0) return 0;
    int cnt = printEvenDigitsHelper(n / 10);
    int d = (int)(n % 10);
    if (d % 2 == 0) {
        printf("%d ", d);
        return cnt + 1;
    }
    return cnt;
}

int printEvenDigits(long long n) {
    if (n < 0) n = -n;            // handle negative numbers
    if (n == 0) {                 // special-case: number 0 has single digit 0 (even)
        printf("0 ");
        return 1;
    }
    return printEvenDigitsHelper(n);
}

int main(void) {
    long long num;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    printf("Even digits: ");
    int count = printEvenDigits(num);
    if (count == 0) printf("None");
    printf("\n");

    return 0;
}
