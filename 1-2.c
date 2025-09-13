#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float age_years, weight_grams, height_cm, percentage;

    // Input section
    printf("Enter Name of Student: ");
    scanf("%s", name); // Reads single word name

    printf("Roll Number: ");
    scanf("%d", &roll);

    printf("Age in years: ");
    scanf("%f", &age_years);

    printf("Weight in grams: ");
    scanf("%f", &weight_grams);

    printf("Height in cm: ");
    scanf("%f", &height_cm);

    printf("Enter CGPA/percentage: ");
    scanf("%f", &percentage);

    // Conversion
    int age_months = age_years * 12;
    float weight_kg = weight_grams / 1000;
    float height_m = height_cm / 100;

    // Output section
    printf("\nName of Student: %s", name);
    printf("\nRoll Number: %d", roll);
    printf("\nAge in months: %d months", age_months);
    printf("\nWeight in Kilograms: %.2f", weight_kg);
    printf("\nHeight in meters: %.2f", height_m);
    printf("\nPercentage Score Secured: %.2f %%", percentage);

    return 0;
}