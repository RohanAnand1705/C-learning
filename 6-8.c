#include <stdio.h>

int main()
{
    int n;

    // Input size of the square matrices
    printf("Enter the size of the matrices (N): ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], sum[n][n];

    int *p1 = &mat1[0][0];
    int *p2 = &mat2[0][0];
    int *pSum = &sum[0][0];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n * n; i++)
    {
        scanf("%d", p1 + i);
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n * n; i++)
    {
        scanf("%d", p2 + i);
    }

    // Add matrices using pointers
    for (int i = 0; i < n * n; i++)
    {
        *(pSum + i) = *(p1 + i) + *(p2 + i);
    }

    // Print sum matrix
    printf("Sum of the matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}
