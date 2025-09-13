#include <stdio.h>

int main()
{
    int a, b, c, largest;

    // Input section
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Enter third number (c): ");
    scanf("%d", &c);

    // Using ternary operator to find largest
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output
    printf("Among %d, %d and %d, the largest number is: %d\n", a, b, c, largest);

    return 0;
}