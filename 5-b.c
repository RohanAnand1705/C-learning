#include <stdio.h>

int main()
{
    int arr[] = {45, 12, 89, 56, 34, 78, 9, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, searchElement;
    int found = 0; // Flag to check if the element is found (0 = false, 1 = true)

    printf("The array is: [ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    // Get input from the user
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Loop through the array to find the element
    for (i = 0; i < size; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            printf("Element %d was found at position %d.\n", searchElement, i + 1);
            break; // Exit loop once element is found
        }
    }

    // If the loop completes and 'found' is still 0, the element is not in the array
    if (found == 0)
    {
        printf("Element %d was not found in the array.\n", searchElement);
    }

    return 0;
}