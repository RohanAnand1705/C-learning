#include <stdio.h>
int main()
{
    int i = 19, j = 29, k;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    return 0;
}