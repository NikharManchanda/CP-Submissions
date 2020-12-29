#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  int k = 1;
  long long int sum = m;
  while (1)
  {

    int t;
    if (k % n)
      t = k % n;
    else
      t = n;
    if (sum < t || sum <= 0)
    {
      cout << sum;
      return 0;
    }
    else if (sum == t)
    { cout << 0;
      return 0;
    }
    sum = sum - t;
    k++;
  }

  return 0;
}