#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    char attempt[100];
    int attempts_left = 3;
    int authenticated = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    while (attempts_left > 0 && !authenticated)
    {
        printf("Confirm your password: ");
        fgets(attempt, sizeof(attempt), stdin);
        attempt[strcspn(attempt, "\n")] = '\0';

        if (strcmp(password, attempt) == 0)
        {
            printf("Correct password.\n");
            authenticated = 1;
        }
        else
        {
            attempts_left--;
            printf("Wrong password.\n");
            if (attempts_left > 0)
            {
                printf("%d attempt%s left.\n", attempts_left, attempts_left > 1 ? "s" : "");
            }
        }
    }

    if (!authenticated)
    {
        printf("Try after sometime.\n");
    }

    return 0;
}
