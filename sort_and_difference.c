#include <stdio.h>

int main()
{
      int n, i, temp = 0;
      scanf("%d", &n);
      int arr[200];

      for (i = 0; i < n; i++)
      {
            scanf("%d", &arr[i]);
      }
          int arr1[n];
          for (i=0 ; i<n ;i++)
          {
              scanf("%d",&arr1[i]);
          }
      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  if (arr[i] > arr[j])
                  {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j < n; j++)
            {
                  if (arr1[i] < arr1[j])
                  {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                  }
            }
      }

      for (int i = 0; i < n; i++)
      {
            printf("%d ",arr[i]-arr1[i]);
      }
      

}
