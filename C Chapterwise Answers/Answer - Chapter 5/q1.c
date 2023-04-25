#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Type a - \n");
    scanf("%d", &a);

    printf("Type b - \n");
    scanf("%d", &b);

    printf("Type c - \n");
    scanf("%d", &c);

    printf("The average is %f",average(a,b,c));

    return 0;
}

 float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}