#include <stdio.h>

int main()
{

    int i, num, flag = 1;
    printf("Enter a number - ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)

    {
        if (num%i == 0)
        {
            printf("%d is not a prime number\n", num);

            flag = 0;
            break;
        }
    }

    if (flag = 1)
        printf("%d is a prime number .");
    return 0;
}