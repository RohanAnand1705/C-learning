#include <stdio.h>

int main()
{
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    printf(*ptr);
    return 0;
}
