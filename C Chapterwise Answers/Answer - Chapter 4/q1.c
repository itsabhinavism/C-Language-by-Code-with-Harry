#include <stdio.h>

float main(){
    float a,b;
    printf("Type the value - ");
    scanf("%f",&b);

    for(a=1;a<=10;a++) {
        printf("%f x %f = %f\n", b,a,a*b);
    }
    return 0;
}