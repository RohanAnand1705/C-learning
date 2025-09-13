#include <stdio.h>

int main()
{
    int x = 12, y;

    y = x << 4 & 5;

    printf("x = %d\n", x);
    printf("y = x << 4 & 5 = %d\n", y);

    return 0;
}