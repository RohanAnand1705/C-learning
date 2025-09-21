#include <stdio.h>

int main()
{
    // Variable declaration
    float grade1, grade2, grade3;
    int credit1, credit2, credit3;
    float sgpa;
    int total_credits;

    // --- User Input ---
    printf("Enter grade points for subjects (O=10, A+=9, A=8, B=7, C=6, D=5, F=0)\n");

    printf("Enter grade points and credits for Subject 1: ");
    scanf("%f %d", &grade1, &credit1);

    printf("Enter grade points and credits for Subject 2: ");
    scanf("%f %d", &grade2, &credit2);

    printf("Enter grade points and credits for Subject 3: ");
    scanf("%f %d", &grade3, &credit3);

    // --- Calculation ---
    total_credits = credit1 + credit2 + credit3;

    if (total_credits > 0)
    {
        sgpa = ((grade1 * credit1) + (grade2 * credit2) + (grade3 * credit3)) / total_credits;
        printf("\nYour calculated SGPA is: %.2f\n", sgpa);

        // --- Grade Display using Control Statements ---
        if (sgpa >= 8)
        {
            printf("Result: Distinction\n");
        }
        else if (sgpa >= 7)
        {
            printf("Result: First Class\n");
        }
        else if (sgpa >= 6)
        {
            printf("Result: Second Class\n");
        }
        else if (sgpa >= 5)
        {
            printf("Result: Third Class\n");
        }
        else
        {
            printf("Result: Not Qualified\n");
        }
    }
    else
    {
        printf("Total credits cannot be zero. Cannot calculate SGPA.\n");
    }

    return 0;
}