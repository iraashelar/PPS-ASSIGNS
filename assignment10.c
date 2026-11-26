#include <stdio.h>

int isLeap(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main()
{
    char *name[] = {"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"};
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, m, d, i, start;

    printf("Enter year: ");
    scanf("%d", &year);

    if (isLeap(year))
        days[1] = 29;

    /* weekday of 1 Jan (0 = Sunday) */
    int p = year - 1;
    start = (1 + 5 * (p % 4) + 4 * (p % 100) + 6 * (p % 400)) % 7;

    for (m = 0; m < 12; m++)
    {
        printf("\n---- %s %d ----\n", name[m], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < start; i++)
            printf("    ");

        for (d = 1; d <= days[m]; d++)
        {
            printf("%3d ", d);
            if ((start + d) % 7 == 0)
                printf("\n");
        }
        printf("\n");

        start = (start + days[m]) % 7;   /* weekday of next month's 1st */
    }
    return 0;
}