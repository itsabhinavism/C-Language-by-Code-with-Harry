#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("type n - ");
    scanf("%d", &n);
    printf("The %dth number in the fibonacci series is %d\n", n, fib(n));
    return 0;
}