#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  /*
  #ifndef ONLINE_JUDGE

    freopen("IP-A.txt", "r", stdin);
    freopen("OP-A.txt", "w", stdout);

  #endif
  */
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, n;
    cin >> a >> b >> n;
    int c = 1;
    int s = 0, d = 0;
    while (a > 0)
    { if (a % 2 != 0)
        break;
      a = a / 2;
      s++;
    }
    while (b > 0)
    {
      if (b % 2 != 0)
        break;
      b = b / 2;
      d++;
    }
    long long int ans = pow(2, s) * pow(2, d);
    if (ans >= n)
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }


  return 0;

}
