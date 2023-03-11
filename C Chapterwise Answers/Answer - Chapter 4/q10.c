#include <stdio.h>

float main(){
    float a,b;
    printf("Type the value - ");
    scanf("%f",&a);

    for(b=10;b>=1;b--) {
        printf("%f + %f = %f\n", a,b,a*b);
    }
    return 0;
}