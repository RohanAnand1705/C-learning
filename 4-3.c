#include <stdio.h>

int main() {
    int number, reversed_number = 0, remainder;

    printf("Enter a 6-digit number (e.g., 123456): ");
    scanf("%d", &number);

    int original_number = number;

    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("The reverse of %d is: %d\n", original_number, reversed_number);

    return 0;
}