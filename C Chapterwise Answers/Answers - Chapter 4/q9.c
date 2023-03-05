
#include <stdio.h>

int main() {
    int num, fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }
    
    printf("Factorial of %d is %d", num, fact);
    
    return 0;
}
