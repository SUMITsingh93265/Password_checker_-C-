#include <stdio.h>
#include <string.h>

int main()
{
    // Password checker

    char password[100];
    char try_1[100];
    char try_2[100];
    char try_3[100];

    printf("Enter your password : ");
    scanf("%s", &password);

    printf("Confirm your password : ");
    scanf("%s", &try_1);

    int value;
    value = strcmp(password, try_1);

    if (value == 0)
    {
        printf("Correct password.");
    }
    else if (value != 0)
    {
        printf("Wrong password.\n");
        printf("2 attempt left.\n");
        printf("Re-enter your password : ");
        scanf("%s", &try_2);
        int value_1 = strcmp(password, try_2);
        if (value_1 == 0)
        {
            printf("Correct password.");
        }
        else if (value_1 != 0)
        {
            printf("Wrong password.\n");
            printf("1 attempt left.\n");
            printf("Re-enter your password : ");
            scanf("%s", &try_3);
            int value_2 = strcmp(password, try_3);
            if (value_2 == 0)
            {
                printf("Correct password.\n");
            }
            else if (value_2 != 0)
            {
                printf("Wrong password.\n");
                printf("Try after sometime.\n");
            }
            else
            {
                printf("Something went wrong.\n");
            }
        }
        else
        {
            printf("Something went wrong.\n");
        }
    }
    else
    {
        printf("Something went wrong.\n");
    }

    return 0;
}