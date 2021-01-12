#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /*
   #ifndef ONLINE_JUDGE

      freopen("Ip-A.txt","r",stdin);
      freopen("Op-A.txt","w",stdout);

   #endif
  */

  int n, m;
  cin >> n >> m;
  int a[n][m];
  int d;
  cin >> d;
  int ans = 0, an = 0;
  std::vector<int> v;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
      v.push_back(a[i][j]);
    }

  }
  sort(v.begin(), v.end());
  int idx = v.size() / 2;
  int id = idx;
  if (v.size() % 2 == 0)
  {
    id = idx - 1;
  }
  for (int i = 0; i < v.size(); i++)
  {
    if (abs(v[i] - v[idx]) % d != 0 || abs(v[i] - v[id]) % d != 0)
    {
      cout << -1;
      return 0;
    }
    else
      ans += (abs(v[i] - v[idx])) / d;
    an += (abs(v[i] - v[id])) / d;
  }

  cout << min(ans, an);


  return 0;
}