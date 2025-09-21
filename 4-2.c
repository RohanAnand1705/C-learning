#include <stdio.h>

void print_pattern_one()
{
    int rows = 5;
    int num = 1;
    printf("Pattern (i):\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void print_pattern_two()
{
    int rows = 4;
    printf("\nPattern (ii):\n");
    for (int i = 1; i <= rows; i++)
    {
        int current_num = i;
        // Increasing part
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", current_num);
            if (i > 1)
                current_num += 3;
        }
        // Decreasing part
        if (i > 1)
            current_num -= 6;
        for (int j = 1; j < i; j++)
        {
            printf("%d ", current_num);
            current_num -= 3;
        }
        printf("\n");
    }
}

int main()
{
    print_pattern_one();
    print_pattern_two();
    return 0;
}