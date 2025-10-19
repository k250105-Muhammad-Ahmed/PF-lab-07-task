#include <stdio.h>
#define SIZE 30

int main()
{
    char string1[SIZE];

    printf("Enter your string: ");
    scanf("%[^\n]", string1);

    for (size_t i = 0; i < SIZE; i++)
    {
        if (string1[i] >= 'a' && string1[i] <= 'z')
        {
            string1[i] = string1[i] - 32;
        }
        else if (string1[i] >= 'A' && string1[i] <= 'Z')
        {
            string1[i] = string1[i] + 32;
        }
    }
    printf("Toggled string is: %s\n", string1);

    return 0;
}