#include <stdio.h>

int main() {
int n, prime =1 ;
printf("Type the value - ");
scanf("%d",&n);

for (int i =2;i<=n;i++)
{
    if (n % i ==0) {
        prime = 0;
        break;
    }
}





    
    return 0;
}