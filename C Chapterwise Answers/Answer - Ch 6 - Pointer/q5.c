#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("%d", **ptr_ptr);
    return 0;
}