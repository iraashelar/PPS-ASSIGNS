#include <stdio.h>

int main()
{
    int rows, columns;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int a[rows][columns], b[rows][columns], c[rows][columns];

    printf("Enter elements for first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid input enter integers.\n");
                return 1;
            }
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &b[i][j]) != 1)
            {
                printf("Invalid input enter integers.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of the two matrices is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}