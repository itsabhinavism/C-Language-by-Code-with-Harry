#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Type n - ");
    scanf("%d", &n);
    printf("The sum of first %d numbers is %d.\n", n, sum(n));

    return 0;
}