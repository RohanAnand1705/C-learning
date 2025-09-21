#include <stdio.h>

// A helper function to print the array
void printArray(int arr[], int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int arr[] = {45, 12, 89, 56, 34, 78, 9, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int position, newValue;

    // Display the original array
    printf("Original array: ");
    printArray(arr, size);

    // Get position and new value from user
    printf("Enter the position you want to update (1 to %d): ", size);
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > size)
    {
        printf("Error: Invalid position. Please enter a number between 1 and %d.\n", size);
    }
    else
    {
        printf("Enter the new value for this position: ");
        scanf("%d", &newValue);

        // Update the array. Array index is position-1.
        arr[position - 1] = newValue;

        // Display the updated array
        printf("Array after update: ");
        printArray(arr, size);
    }

    return 0;
}