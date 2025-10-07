#include <stdio.h>

int main()
{
    int n;

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], copy_arr[n];
    int *src = arr;
    int *dest = copy_arr;

    // Input elements of the array
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", src + i);
    }

    // Copy array using pointers
    for (int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i);
    }

    // Print the copied array
    printf("Copied array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(dest + i));
    }
    printf("\n");

    return 0;
}
