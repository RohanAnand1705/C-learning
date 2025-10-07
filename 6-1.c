#include <stdio.h>

int main()
{
    int a = 100, b = 200;
    int *p = &a, *q = &b;
    p = q;
    printf(p);
    return 0;
}
