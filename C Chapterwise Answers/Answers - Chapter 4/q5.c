#include <stdio.h>
float  main() {
    float a,b;
    // float a=0; 
    printf("Type the value - ");
    scanf("%f",&b);

    while(a<=11) {
        printf("%f + %f = %f\n",b,a,(a+b)); a ++;
    }

    return 0;
}