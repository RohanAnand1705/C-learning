#include <stdio.h>

int main()
{
    int N, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int ARR[N], COPY_ARR[N];

    // Input elements
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ARR[i]);
    }

    // Copy in reverse order
    for (i = 0; i < N; i++)
    {
        COPY_ARR[i] = ARR[N - 1 - i];
    }

    // Print reversed array
    printf("Reversed array: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", COPY_ARR[i]);
    }

    return 0;
}