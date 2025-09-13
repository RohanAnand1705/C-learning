#include <stdio.h>

long long divide(long long dividend, double divisor)
{
    double result = dividend / divisor;
    return (long long)result; // truncate towards zero
}

int main()
{
    long long dividend;
    double divisor;

    // Input section
    printf("Enter dividend (long long): ");
    scanf("%lld", &dividend);

    printf("Enter divisor (double): ");
    scanf("%lf", &divisor);

    // Print entered values
    printf("\nYou entered dividend = %lld and divisor = %.1f\n", dividend, divisor);

    // Print result of division
    printf("Result after division (truncated): %lld\n", divide(dividend, divisor));

    return 0;
}