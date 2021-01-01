#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  char arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == 'W')
      {
        if (j >= 1)
        {
          if (arr[i][j - 1] == 'P')
          {
            c++;
            continue;
          }
        }
        if (i < n - 1)
        {
          if (arr[i + 1][j] == 'P')
          {
            c++;
            continue;
          }
        }
        if (i >= 1)
        {
          if (arr[i - 1][j] == 'P')
          {
            c++;
            continue;
          }
        }
        if (j < m - 1)
        {
          if (arr[i][j + 1] == 'P')
          {
            c++;
            continue;
          }
        }
      }
    }
  }
  cout << c;


  return 0;

}
