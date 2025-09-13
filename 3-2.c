#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year rule:
    // (1) Divisible by 400 → leap
    // (2) Divisible by 4 but not by 100 → leap
    // Else → not leap

    (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)
        ? printf("%d is a leap year\n", year)
        : printf("%d is not a leap year\n", year);

    return 0;
}