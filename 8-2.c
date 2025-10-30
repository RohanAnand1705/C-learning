#include <stdio.h>

/* Returns 1 if n is an Armstrong number according to the "cube of digits" rule.
   (i.e., n == sum of cubes of its digits). For negative inputs returns 0. */
int isArmstrong(int n) {
    if (n < 0) return 0;        // treat negative numbers as not Armstrong
    int orig = n;
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d * d;      // cube of digit
        n /= 10;
    }
    return (sum == orig) ? 1 : 0;
}

int main(void) {
    int num;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(num))
        printf("%d is an Armstrong number (sum of cubes of its digits equals %d).\n", num, num);
    else
        printf("%d is NOT an Armstrong number (sum of cubes of its digits != %d).\n", num, num);

    return 0;
}
