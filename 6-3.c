#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    printf(a, b);
    return 0;
}
