#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 5;
    sumandavg(i, j, &sum, &avg);
    printf("the value of sum is %d\n", sum);
    printf("the avg is %f", avg);

    return 0;
}