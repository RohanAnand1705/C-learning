#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate string length
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%s is not a palindrome\n", str);
    }
    else
    {
        printf("%s is a palindrome\n", str);
    }

    return 0;
}
