#include <stdio.h>

int findDuplicate(int arr[], int n)
{
    int freq[n];
    for (int i = 0; i < n; i++)
        freq[i] = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
            return arr[i];
        freq[arr[i]]++;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate element: %d\n", findDuplicate(arr, n));
    return 0;
}