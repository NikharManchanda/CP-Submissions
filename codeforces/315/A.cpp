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
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
  int open[n] {0};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i != j)
      {
        if (a[j] == b[i])
        {
          open[j] = 1;
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (open[i] == 0)
      ans++;
  }
  cout << ans;




  return 0;

}
