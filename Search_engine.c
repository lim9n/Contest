#include <stdio.h>

int main()
{
  int k, ans = 1;
  scanf("%d", &k);
  for (int i = 0; i < k; i++)
  {
    int arr[1000];
    int size, i, toSearch, found;
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
      scanf("%d", &arr[i]);
    }

    scanf("%d", &toSearch);

    found = 0;

    for (i = 0; i < size; i++)
    {
      if (arr[i] == toSearch)
      {
        found = 1;
        break;
      }
    }

    if (found == 1)
    {
      printf("Case %d: %d\n", ans, i + 1);
    }
    else
    {
      printf("Case %d: Not Found\n", ans);
    }
    ans++;
  }

  return 0;
}