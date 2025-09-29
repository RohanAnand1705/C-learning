#include <stdio.h>

int main()
{
    int N, i;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d elements: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize maximums
    int max1 = arr[0], max2 = -1e9; // assume very small value for max2

    for (i = 1; i < N; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    // Display results
    printf("Maximum element = %d\n", max1);
    if (max2 == -1e9)
    {
        printf("Second maximum does not exist.\n");
    }
    else
    {
        printf("Second maximum element = %d\n", max2);
    }

    return 0;
}