#include <stdio.h>

float celcius(int a)
{
    float result;
    result = (a - 32) / 1.8;
    return result;
}

int main()
{
    int a;

    printf("type the value of fahrenhiet - \n");
    scanf("%d", &a);

    printf("the value of fahrenhiet in celcius is %f", celcius(a));
    return 0;
}

