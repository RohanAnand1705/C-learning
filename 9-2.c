#include <stdio.h>
#include <string.h>

void address(char city[], char state[], char zip[])
{
    char fullAddress[100];

    // Combine strings with commas and spaces
    strcpy(fullAddress, city);
    strcat(fullAddress, ", ");
    strcat(fullAddress, state);
    strcat(fullAddress, ", ");
    strcat(fullAddress, zip);

    printf("Full Address: %s\n", fullAddress);
}

int main()
{
    char city[30], state[30], zip[10];

    printf("Enter city: ");
    gets(city);

    printf("Enter state: ");
    gets(state);

    printf("Enter zip: ");
    gets(zip);

    address(city, state, zip);

    return 0;
}
