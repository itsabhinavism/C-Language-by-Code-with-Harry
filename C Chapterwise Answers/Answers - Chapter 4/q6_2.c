//do while loop

#include <stdio.h>
float main() {
    float a,b;
     printf("Type the value - ");
    scanf("%f",&b);

    do {
   printf("%f + %f = %f\n", b ,a,(a+b));
        }
        while (a<=11,a++);
    return 0;
}