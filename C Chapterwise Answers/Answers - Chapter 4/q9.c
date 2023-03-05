
#include <stdio.h>

float main() {
    float n, f = 1;
    
    printf("Enter a number: ");
    scanf("%f", &n);
    
    float i = 1;
    while (i <= n) {
        f *= i;
        i++;
    }
    
    printf("Factorial of %d is %d", n,f);
    
    return 0;
}
