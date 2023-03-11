#include <stdio.h>

float main() {
     float i,n,f=1;
     printf("Type the value - ");
     scanf("%f",&n);

     while (i=0,i<=n) {
   
        printf("The factorial of %f is %f\n", n,f);f=f*i; i++;
     }
    
    return 0;
}