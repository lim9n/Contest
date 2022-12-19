#include<stdio.h>

int main()
{
      int input;
      int num1, num2;
      scanf("%d", &input);
      for (int i = 0; i < input; i++)
      {
            scanf("%d %d", &num1, &num2);
            int flag;
            int i, j;
            for (i = num1; i <= num2; ++i)
            {
                  flag = 0;
                  for (j = 2; j <= i / 2; ++j)
                  {
                        if (i % j == 0)
                        {
                              flag = 1;
                              break;
                        }
                  }
                  if (flag == 0)
                        printf("%d ", i);
            }
            printf("\n");
      }
}