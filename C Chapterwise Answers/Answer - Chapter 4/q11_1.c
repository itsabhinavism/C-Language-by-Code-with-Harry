#include <stdio.h>

int main() {
    float i = 1, n, f = 1;

    printf("Enter a number: ");
    scanf("%f", &n);

    do {
        f *= i;
        i++;
    } while (i <= n);

    printf("Factorial of %f is %f\n", n, f);

    return 0;
}
