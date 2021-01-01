#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if (n == 1)
  {
    cout << 1;
    return 0;
  }
  int maxl = 2;
  for (int i = 0; i < n - 1; i++)
  { if (maxl >= n - i )
    {
      break;
    }
    int l = 2;
    int a = arr[i];
    int b = arr[i + 1];
    for (int j = i + 2; j < n; j++)
    {
      if (arr[j] == a + b)
      {
        a = b;
        b = arr[j];
        l++;
      }
      else
      {
        break;
      }
    }
    maxl = max(maxl, l);
  }
  cout << maxl;


  return 0;

}
