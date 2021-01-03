#include <bits/stdc++.h>
using namespace std;
vector<int> bip[202];
vector<int> adj[101];
bool vis[101];
bool sing[101];
int ans = 0;
void dfs(int n)
{
  vis[n] = true;
  for (auto x : adj[n])
  {
    if (!vis[x])
    {
      dfs(x);
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    int k;
    cin >> k;
    if (k == 0)
    {ans++, sing[i] = 1; continue;}

    while (k--)

    {
      int a;
      cin >> a;
      bip[i].push_back(a + 100);
      bip[a + 100].push_back(i);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (auto x : bip[i])
    {
      for (auto y : bip[x])
      {
        if (y != i)
        {
          adj[i].push_back(y);
          adj[y].push_back(i);
        }
      }
    }
  }
  int c = 0;
  for (int i = 1; i <= n; i++)
  {
    if (!sing[i] && !vis[i])
    {
      dfs(i);
      c++;
    }
  }
  if (c > 0)
    c--;

  cout << ans + c;


  return 0;

}
