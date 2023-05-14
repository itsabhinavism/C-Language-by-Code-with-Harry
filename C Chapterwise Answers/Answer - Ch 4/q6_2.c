//do while loop

#include <stdio.h>
float main() {
    float a,b;
     printf("Type the value - ");
    scanf("%f",&b);

    do {
   printf("%f + %f = %f\n", b ,a,(b+a));
        }
        while (a++,a<=10);
    return 0;
}