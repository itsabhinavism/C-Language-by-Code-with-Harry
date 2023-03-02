#include <stdio.h>

float main()
{
    float physics, chemistry, maths, total;

    printf("Type the physics marks - ");
    scanf("%f", &physics);

    printf("Type the chemistry marks - ");
    scanf("%f", &chemistry);

    printf("Type the chemistry marks - ");
    scanf("%f", &chemistry);

    total = (physics + chemistry + maths) / 3;
    if (total < 40 || physics < 33 && chemistry < 33 && maths < 33)
    {
        printf("Your total marks is %f and you are fail.\n", total);
    }
    else if (total > 300 || physics > 100 || chemistry > 100 || maths > 100)
    {
        printf("But the data input by you is invalid.\n");
    }

    else
    {
        printf("Your total marks is %f and you are pass.\n", total);
    }
    return 0;
}