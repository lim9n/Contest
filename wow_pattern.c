#include <stdio.h>

int main()
{

   int n;

   int i, j, res = 1, k;

   scanf("%d", &n);

   int var = n;

   for (i = 1; i <= n; i++)
   {

      for (k = 1; k < var; k++)
      {

         printf(" ");
      }

      if (i % 2 != 0)
      {

         for (j = 1; j <= res; j++)
         {

            printf("^");
         }
      }

      else
      {

         for (j = 1; j <= res; j++)
         {

            printf("*");
         }
      }

      printf("\n");

      res =res+ 2;

      var=var-1;
   }
}