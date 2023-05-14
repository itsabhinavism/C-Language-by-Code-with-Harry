#include<stdio.h>
float main() {
    float a;

    printf("Type the celcius - ");
    scanf("%f",&a);

    printf("The value of celcius to farhaniet is %f degree farhaniet", 1.8*a+32 );
    return 0;
}