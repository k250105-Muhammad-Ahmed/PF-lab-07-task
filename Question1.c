#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE], temp = 0;
    size_t i = 0;

    printf("Enter %d integer numbers\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = a[SIZE - 1];
    for (i = SIZE - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = temp;

    printf("Array after right shift:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d,", a[i]);
    }

    return 0;
}