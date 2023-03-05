#include <stdio.h>
float main()
{
    float i, n, f=1;
    printf("Type the value - ");
    scanf("%f", &n);

    for (i = 1; i <= n;)
    {
        f = f * i;
    }
    printf("The value of factorial %f is %f\n", n, f);

    return 0;
}