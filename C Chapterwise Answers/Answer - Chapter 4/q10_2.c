// second method
#include <stdio.h>

int main()
{
   int n, i, p = 1;

   printf("Enter a positive integer: ");
   scanf("%d", &n);

   for (i = 2; i <= n / 2; i++)
   {
      if (n % i == 0)
         ;
      {
         p = 0;
         break;
      }
   }

   if (n == 1)
   {
      printf("1 is not a prime number.\n");
   }
   else if (p)
   {
      printf("%d is a prime number.\n", n);
   }
   else
   {
      printf("%d is not a prime number.\n", n);
   }

   return 0;
}
