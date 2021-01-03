#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  int ans = 0;
  int cost[n + 1];
  cost[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> cost[i];
  }
  for (int i = 1; i <= m; i++)
  {
    int a, b;
    cin >> a >> b;
    ans += min(cost[a], cost[b]);
  }
  cout << ans;

  return 0;

}
