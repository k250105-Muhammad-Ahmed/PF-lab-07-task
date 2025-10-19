#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter character: ");
    scanf("%[^A-Za-z]", str);

    printf("%s\n", str);

    return 0;
}