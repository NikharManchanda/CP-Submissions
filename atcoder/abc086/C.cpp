#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int x = 0, y = 0, i = 0;
  while (t--)
  {
    int m, a, b;
    cin >> m >> a >> b;
    int d = abs(a - x) + abs(b - y);
    x = a;
    y = b;
    int k = m - i;
    i = m;
    if (k < d)
    {
      cout << "No";
      return 0;
    }
    else
    {
      if ((d - k) % 2 != 0)
      {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
  return 0;

}