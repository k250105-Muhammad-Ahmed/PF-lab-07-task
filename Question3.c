#include <stdio.h>

int main()
{

    int marks[10], i = 0, command = 0, sumP = 0, sumF = 0, sumH = 0;
    float avgF = 0, avgP = 0, avgH = 0;

    printf("Enter marks for failed students:\n");
    printf("Enter -1 to Exit:\n");
    scanf("%d", &command);
    if (command == -1)
    {
        printf("Early Exit Initiated\n");
        return 0;
    }

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        if (i == 4)
        {
            for (i = 0; i < 5; i++)
            {
                sumF += marks[i];
            }
            printf("Enter -1 to Exit:\n");
            scanf("%d", &command);
            if (command == -1)
            {
                printf("Exit Initiated\n");
                break;
            }
            avgF = sumF / 5;
            printf("avg of failed students is :%.2f\n", avgF);
            // return 0
        }
    }

    printf("Enter marks for passed students:\n");
    printf("Enter -1 to Exit:\n");
    scanf("%d", &command);
    if (command == -1)
    {
        printf("Early Exit Initiated\n");
        return 0;
    }

    for (i = 5; i < 10; i++)
    {
        scanf("%d", &marks[i]);
        if (i == 9)
        {
            for (i = 5; i < 10; i++)
            {
                sumP += marks[i];
            }

            printf("Enter -1 to Exit:\n");
            scanf("%d", &command);
            if (command == -1)
            {
                printf("Early Exit Initiated\n");
                break;
            }
            avgP = sumP / 5;
            printf("avg of passed %.2f\n", avgP);
            // return 0
        }
    }

    avgH = (sumP + sumF) / 10;
    printf("Overall avg of class %.2f", avgH);

    return 0;
}