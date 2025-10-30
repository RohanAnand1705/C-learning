#include <stdio.h>

void swap(int *ptr1, int *ptr2);

int main(void)
{
    int var1 = 10;
    int var2 = 20;

    printf("Before swap: var1 = %d, var2 = %d\n", var1, var2);

    swap(&var1, &var2);

    printf("After  swap: var1 = %d, var2 = %d\n", var1, var2);

    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
