#include <stdio.h>

int main()
{
    int num, original_num, remainder, result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++)
    {
        original_num = num;
        result = 0;

        while (original_num != 0)
        {
            remainder = original_num % 10;
            result += remainder * remainder * remainder;
            original_num /= 10;
        }

        if (result == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}