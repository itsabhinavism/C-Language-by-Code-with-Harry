#include <stdio.h>
float  main() {
    float a,b;
    printf("Type the value - ");
    scanf("%f",&b);

float a=0;
while (a>=10) {
    printf("%f + %f = %f",b,a,a+b); a++ ;
}    
    return 0;
}