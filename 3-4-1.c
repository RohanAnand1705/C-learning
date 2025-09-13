#include <stdio.h>

int main()
{
    int num = 15, n = 3;
    int result;

    result = (num >> n) & 1;

    printf("Num = %d (in binary 1111)\n", num);
    printf("(num >> %d) & 1 = %d\n", n, result);

    return 0;
}