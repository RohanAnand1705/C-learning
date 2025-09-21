#include <stdio.h>

void print_pattern_one()
{
    int rows = 5;
    int num = 1; // Counter for the numbers

    printf("Pattern (i):\n");

    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop for columns in each row
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n"); // Move to the next line after the row is printed
    }
}

void print_pattern_two_aligned()
{
    int rows = 4;

    printf("\nPattern (ii):\n");

    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {

        // Loop to print leading spaces for the pyramid alignment
        for (int space = 1; space <= rows - i; space++)
        {
            printf("  "); // Adjust spacing as needed
        }

        int current_num = i;

        // Loop for the increasing part of the number sequence
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", current_num);
            if (i > 1)
            {
                current_num += 3;
            }
        }
        // Prepare for the decreasing part by stepping back twice
        if (i > 1)
        {
            current_num -= 6;
        }

        // Loop for the decreasing part of the number sequence
        for (int j = 1; j < i; j++)
        {
            printf("%d ", current_num);
            current_num -= 3;
        }

        printf("\n"); // Move to the next line
    }
}

int main()
{
    print_pattern_one();
    print_pattern_two_aligned();
    return 0;
}