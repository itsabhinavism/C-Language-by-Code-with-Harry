#include <stdio.h>
float  main() {
    float a,b;
    printf("Type the value - ");
    scanf("%f",&b);

    while(a<=11) {
        printf("%f + %f = %f\n",b,a,(a+b)); a ++;
    }

    return 0;
}