#include <stdio.h>
int  main() {
    int a,b;
    printf("Type the value - ");
    scanf("%d",&b);

    for (a=0;a<=11;a++) {
        printf("%d + %d = %d\n",a,b,(a * b));
    }
    return 0;
}