#include <stdio.h>
#include <string.h>

int main()
{
      int n;

      scanf("%d", &n);
      for (int i = 1; i <= n; i++)
      {

            char input[9999];
            scanf("%s", input);
            for (int i = strlen(input)-1; i >=0; i--)
            {
                  if(input[i]=='1')
                  printf("A");
                  else if (input[i]=='2')
                  printf("B");
                  else if (input[i]=='3') 
                  printf("C");
                  else if (input[i]=='4')
                  printf("D");
                  else if (input[i]=='5')
                  printf("E");
                  else if (input[i]=='6')
                  printf("F");
                  else if (input[i]=='7')
                  printf("G");
                  else if (input[i]=='8')
                  printf("H");
                  else if (input[i]=='9')
                  printf("I");


            }
            
                  printf("\n");
            
            
      }
}