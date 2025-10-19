#include <stdio.h>

int main()
{

    int arr[10];

    printf("Enter 10 numbers:\n");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arr[i + 1] = -1;
        }
    }

    printf("Duplicate numbers is replaced by -1:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
