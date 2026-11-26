#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    char choice;
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == '1')
        {
            len1 = strlen(s1);
            len2 = strlen(s2);
            printf("Length of first string = %d\n", len1);
            printf("Length of second string = %d\n", len2);
        }
        else if (choice == '2')
        {
            strcpy(s2, s1);
            printf("Copied string = %s\n", s2);
        }
        else if (choice == '3')
        {
            if (strlen(s1) + strlen(s2) > 99)
                printf("Error: strings are too long to join\n");
            else
            {
                strcat(s1, s2);
                printf("Joined string = %s\n", s1);
            }
        }
        else if (choice == '4')
        {
            if (strcmp(s1, s2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
        }
        else if (choice == '5')
        {
            printf("Thank you!\n");
        }
        else
        {
            printf("Error: invalid choice, enter 1 to 5\n");
        }

    } while (choice != '5');

    return 0;
}