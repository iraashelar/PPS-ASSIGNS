#include <stdio.h>

long int fact_loop(int n)
{
    long int f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

long int fact_rec(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact_rec(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0 || num > 20)
    {
        printf("Enter a number between 0 and 20\n");
    }
    else
    {
        printf("Factorial without recursion = %ld\n", fact_loop(num));
        printf("Factorial with recursion = %ld\n", fact_rec(num));
    }

    return 0;
}