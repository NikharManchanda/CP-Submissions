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
  int n, m;
  cin >> n >> m;
  int a[n + 1] = {0};
  for (int i = 1; i <= m; i++)
  {
    int x, y;
    cin >> x >> y;
    a[x] = 1;
    a[y] = 1;
  }
  int k;
  cout << n - 1 << endl;
  for (int i = 1; i <= n; i++)
  {
    if (a[i] != 1)
    {
      k = i;
      break;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (i != k)
    {
      cout << i << " " << k << endl;
    }
  }



  return 0;

}
