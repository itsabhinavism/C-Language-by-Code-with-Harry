#include <stdio.h>

float main()
{
    float a, b;
    printf("Type the value - ");
    scanf("%f", &b);

    for (a = 0; a > 11; a++)
    {
        printf("%f + %f = %f\n", a, b, (a + b));
    }
    return 0;
}