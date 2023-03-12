#include <stdio.h>
float main()
{
    float i = 1, n, f = 1;

    printf("Enter a number: ");
    scanf("%f", &n);

    while (i <= n)
    {
        f *= i;
        i++;
    }

    printf("Factorial of %f is %f\n", n, f);

    return 0;
}
