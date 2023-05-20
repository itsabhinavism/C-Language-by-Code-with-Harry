#include <stdio.h>

void printadd(int a)
{
    printf("the adress is %u\n", &a);
}

int main()
{
    int n = 4;
    printf("the value of variable is %d\n", n);
    printadd(n);
    printf("the adress is %u", &n);

    return 0;
}