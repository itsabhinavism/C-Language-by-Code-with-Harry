#include <stdio.h>

float main(){
    int year;

    printf("Type the year - ");
    scanf("%d",&year);

if (year%4==0 && year% 100 !=0 || year % 400 != 0 ) {
     printf("This is a Leap Year.\n");
}

else 
{ printf("This is not a Leap Year.\n");}

    return 0;
}