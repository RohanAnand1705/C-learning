#include <stdio.h>
int main()
{
    int a, b;
    float f;
    char ch[50];
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %s", &ch);
    printf("\nYou entered:%d, %d, %.2f, %s\n", a, b, f, ch);
    printf("\n ----Arithmetic operators-----\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    int x = a;
    x += 5;
    printf("\nAfter x+=5, x=%d\n", x);
    x++;
    printf("After x++, x=%d\n", x);
    x--;
    printf("After x--, x=%d\n", x);

    printf("\n---Relationaland logical operators----\n");
    if (a > b && f > 0)
        printf("a > b and f > 0 is True\n");
    else
        printf("a > b and f > 0 is False\n");

    if (a == b || f < 0)
        printf("a == b or f < 0 is True\n");
    else
        printf("a == b or f < 0 is False\n");

    printf("\n---Branching statements----\n");
    if (a > b)
        printf("a is greater than b\n");
    else if (a < b)
        printf("a is less than b\n");
    else
        printf("a is equal to b\n");

    // Switch case
    int choice;
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You chose option 1\n");
        break;
    case 2:
        printf("You chose option 2\n");
        break;
    case 3:
        printf("You chose option 3\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    // loops
    printf("\n---Loops----\n");

    // For loop
    printf("For loop (1 to 5):\n");
    for (int i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");
    // While loop
    printf("While loop (1 to 5):\n");
    int j = 1;
    while (j <= 5)
    {
        printf("%d ", j);
        j++;
    }
    printf("\n");
    // Do-while loop
    printf("Do-while loop (1 to 5):\n");
    int k = 1;
    do
    {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");
    // break and continue
    printf("\n---loop with break----\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            break;
        printf("%d ", i);
    }
    printf("\n");

    printf("\n---loop with continue----\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
