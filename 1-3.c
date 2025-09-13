#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Input temp in Celsius
    printf("Enter temp in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}