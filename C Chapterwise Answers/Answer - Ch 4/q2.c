#include <stdio.h>
int main()
{
   int i, num;
   /* Input a number to print table */
   printf("Enter number to print table: ");
   scanf("%d", &num);
   for (i = 10; i >= 1; i--)
   {
      printf("%d * %d = %d\n", num, i, (num * i));
   }
   return 0;
}