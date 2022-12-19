#include <stdio.h>

int return_gcd(int n1, int n2);

int main()
{

      int input;

      scanf("%d", &input);

      for (int t = 0; t < input; t++)
      {

            int k;

            int count = 0;

            scanf("%d", &k);

            int arr[k];

            for (int i = 0; i < k; i++)
            {

                  scanf("%d", &arr[i]);
            }

            for (int i = 0; i < k; i++)
            {

                  for (int j = 0; j < k; j++)
                  {

                        if (i != j && return_gcd(arr[i], arr[j]) == 1)
                        {

                              count++;
                        }
                  }
            }

            printf("%d\n", count);
      }
}

int return_gcd(int n1, int n2)
{

      int i, gcd = 0;

      for (i = 1; i <= n1 && i <= n2; ++i)
      {

            if (n1 % i == 0 && n2 % i == 0)
            {

                  gcd = i;
            }
      }

      return gcd;
}