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
    int n;
    cin >> n;
    int a[n];
    long long int sum = 0;
    int o = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
        o++;
      else
        c++;
      sum += a[i];
    }
    if (sum % 2 != 0)
    {
      cout << "NO" << endl;
      continue;
    }
    if (c % 2 == 0 && o % 2 == 0)
    {
      cout << "YES" << endl;
      continue;
    }
    else if (c % 2 != 0 && o >= 2 && o % 2 == 0)
    {
      cout << "YES" << endl;
      continue;
    }
    else
    {
      cout << "NO" << endl;
      continue;
    }
  }


  return 0;

}
