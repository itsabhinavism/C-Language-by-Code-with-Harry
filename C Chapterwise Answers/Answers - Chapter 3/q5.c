#include <stdio.h>

char main()
{
    char a;
    printf("Type a a single letter/number - ");
    scanf("%c", &a);

    if (a >= 97 && a <= 122)
    {
        printf("This is a lowercase.\n");
    }

    else if (a >= 65 && a <= 90)
    {
        printf("This is a uppercase.\n");
    } 

    else if (a >= 48 && a <= 57)
    {
        printf("This is a number.\n");
    }
    
    else

        printf("This is a more than a single letter/text.(INVALID)\n");

    return 0;
}