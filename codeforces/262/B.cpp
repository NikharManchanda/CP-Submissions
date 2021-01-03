#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, k;
  cin >> n >> k;
  long long int arr[n];
  long long int c = 0, z = 0;
  for (long long int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0)
      c++;
    if (arr[i] == 0)
      z++;
  }
  long long int sum = 0;
  if (k <= c)
  {
    for (long long int i = 0; i < n; i++)
    {
      if (i < k)
      {
        sum += abs(arr[i]);
      }
      else
        sum += arr[i];
    }
  }
  else if (k > c)
  {
    if (z > 0)
    {
      for (long long int i = 0; i < n; i++)
      {
        sum += abs(arr[i]);
      }
    }
    else
    {
      if ((k - c) % 2 == 0)
      {
        for (long long int i = 0; i < n; i++)
        {
          sum += abs(arr[i]);
        }
      }
      else if ((k - c) % 2 == 1)
      {
        long long int cmin = INT_MAX;
        for (long long int i = 0; i < n; i++)
        {
          cmin = min(cmin, abs(arr[i]));
          sum += abs(arr[i]);
        }

        sum = sum - 2 * cmin;

      }
    }
  }

  cout << sum;
  return 0;

}
