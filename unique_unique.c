#include <stdio.h>
#include <string.h>

int main()
{
      int n;
      int count=0;
      scanf("%d", &n);
      char ch[n];
      scanf("%s", ch);

      for (int i = 0; i < strlen(ch); i++)
      {
            int flag = 0;
            for (int j = 0; j < strlen(ch); j++)
            {
                  if (ch[i] == ch[j] && i != j)
                  {
                        flag = 1;
                        break;
                  }
            }
            if (flag == 0)
            count=count+1;
                  // printf("%c", ch[i]);
      }

      printf("%d",count);



      return 0;
}