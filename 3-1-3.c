#include <stdio.h>
int main()
{
    char ch = '0';
    printf("%d", ch-- + --ch);
    return 0;
}