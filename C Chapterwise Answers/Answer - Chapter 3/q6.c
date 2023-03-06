#include <stdio.h>

int main(){
    int a,b,c,d;
printf("Type the number - ");
scanf("%d",&a);

printf("Type the number - ");
scanf("%d",&b);

printf("Type the number - ");
scanf("%d",&c);

printf("Type the number - ");
scanf("%d",&d);

if (a>=b && a>=c && a>=d) {
    printf("%d is the largest number.",a);
}

else if (b>= a && b >=c && b>= d) {
    printf("%d is the largest number.",b);
}

else if (c>= a && c >=b && c>= d) {
    printf("%d is the largest number.",c);
}

else if (d>= a && d >=b && d>= c) {
    printf("%d is the largest number.",d);
}

else {
    printf("Invalid bruh");
}

    return 0;
}