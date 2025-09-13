#include <stdio.h>

int main()
{
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check last bit using bitwise AND
    if (num & 1)
        printf("%d is Odd.\n", num);
    else
        printf("%d is Even.\n", num);

    return 0;
}