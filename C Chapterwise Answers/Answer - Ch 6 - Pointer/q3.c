#include <stdio.h>

void multiplyByTen(int *num)
{
    *num = (*num) * 10;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    multiplyByTen(&number);

    printf("Result: %d\n", number);
    

    return 0;
}
