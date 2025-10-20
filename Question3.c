#include <stdio.h>

int main()
{

    int marks[10], i = 0, sumP = 0, sumF = 0, sumH = 0, countP = 0, countF = 0;
    int command = 0;
    float avgF = 0, avgP = 0, avgH = 0;

    printf("Enter marks for failed students:\n");
    printf("Enter -1 to Exit:\n");
    // scanf("%d", &command);
    // if (command == -1)
    // {
    //     printf("Early Exit Initiated\n");
    //     return 0;
    // }

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] == -1)
        {
            printf("Early Exit Initiated\n");
            break;
        }
        countF++;
        if (i == 4)
        {
            for (i = 0; i < 5; i++)
            {
                sumF += marks[i];
            }
            // printf("Enter -1 to Exit:\n");
            // scanf("%d", &command);
            // if (command == -1)
            // {
            //     printf("Exit Initiated\n");
            //     break;
            // }
            avgF = sumF / countF;
            for (i = 0; i < 5; i++)
            {
                printf("Failed Student Marks:%d\n", marks[i]);
            }
            printf("avg of failed students is :%.2f\n", avgF);
            // return 0
        }
    }

    printf("Enter marks for passed students:\n");
    printf("Enter -1 to Exit:\n");
    // scanf("%d", &command);
    // if (command == -1)
    // {
    //     printf("Early Exit Initiated\n");
    //     return 0;
    // }

    for (i = 5; i < 10; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] == -1)
        {
            printf("Early Exit Initiated\n");
            break;
        }
        countP++;
        if (i == 9)
        {
            for (i = 5; i < 10; i++)
            {
                sumP += marks[i];
            }

            // printf("Enter -1 to Exit:\n");
            // scanf("%d", &command);
            // if (command == -1)
            // {
            //     printf("Early Exit Initiated\n");
            //     break;
            // }
            avgP = sumP / countP;
            for (i = 5; i < 10; i++)
            {
                printf("Passed Student Marks:%d\n", marks[i]);
            }
            printf("avg of passed %.2f\n", avgP);
            // return 0
        }
    }

    avgH = (sumP + sumF) / (countF + countP);
    printf("Overall avg of class %.2f", avgH);

    return 0;
}
