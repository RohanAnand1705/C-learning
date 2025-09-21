#include <stdio.h>

int main()
{
    // Declare and initialize the array
    int arr[] = {45, 12, 89, 56, 34, 78, 9, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Assume the first element is the largest
    int max = arr[0];

    printf("The array is: [ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    // Iterate through the array from the second element
    for (i = 1; i < size; i++)
    {
        // If the current element is greater than max, update max
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print the result
    printf("The largest number in the array is: %d\n", max);

    return 0;
}