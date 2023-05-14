#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("type a - \n");
    scanf("%d", &a);

    printf("type b - \n");
    scanf("%d", &b);

    printf("type c - \n");
    scanf("%d", &c);

    printf("the average of a,b,c is %f", average(a, b, c));

    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
