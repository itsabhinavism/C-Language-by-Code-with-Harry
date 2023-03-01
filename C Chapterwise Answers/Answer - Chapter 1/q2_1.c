#include<stdio.h>
float main() {
    float a;
    float b;

    printf("Type the value of a - ");
    scanf("%f",&a);

    printf("Type the value of b - ");
    scanf("%f",&b);

    printf("The area of circle is %f unit square", a*b*3.14);
    return 0;
}