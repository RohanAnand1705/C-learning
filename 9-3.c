#include <stdio.h>

void merger(int a[], int b[], int n1, int n2) {
    int c[100], i, j, k = 0;

    // Merge both arrays
    for (i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }
    for (j = 0; j < n2; j++) {
        c[k] = b[j];
        k++;
    }

    // Display merged array in reverse order
    printf("\nMerged array in reverse order:\n");
    for (i = k - 1; i >= 0; i--) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

int main() {
    int a[50], b[50], n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    merger(a, b, n1, n2);

    return 0;
}
