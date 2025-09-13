#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4, d;

    d = a & b | c ^ a;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("d = a & b | c ^ a = %d\n", d);

    return 0;
}