#include <stdio.h>
float main()
{
    float a, b, c;

    printf("Type the value of Principle - ");
    scanf("%f", &a);

    printf("Type the value of Rate of Interest - ");
    scanf("%f", &b);

    printf("Type the value of Time - ");
    scanf("%f", &c);

    float value;
    value = (a * b * c) / (100);
    printf("The Simple Interest is %f\n", value);
    return 0;
}