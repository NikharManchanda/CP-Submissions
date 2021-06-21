#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define nl                "\n"
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).end(),(x).begin()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define fix(prec)         {cout << setprecision(prec) << fixed;}
#define lcm(a, b)         ((a) * (b)) / __gcd(a, b)
#define rev                  greater<int>()
const double pi = acos(-1.0);
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 1e5 + 5;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}


vector<pair<int, int> > adj[60][60];
bool vis[60][60];
bool ok = true;
int c = 0;

void dfs(int x, int y, int parentx, int parenty)
{
  vis[x][y] = 1;
  for (auto u : adj[x][y])
  {
    if (vis[u.fr][u.sc] == 1 && (parentx != u.fr || parenty != u.sc))
    {
      cout << "Yes" << nl;
      exit(0);
    }
    else if (vis[u.fr][u.sc] == 0 && (parentx != u.fr || parenty != u.sc))
    {
      dfs(u.fr, u.sc, x, y);
    }

  }

}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n, m;
  cin >> n >> m;
  char a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int xidx, yidx;
      for (int k = 0; k < 4; k++)
      {
        xidx = i + dx[k];
        yidx = j + dy[k];
        if (xidx >= 0 && yidx >= 0 && yidx < m && xidx < n)
        {
          if (a[xidx][yidx] == a[i][j])
          {
            adj[i][j].pb({xidx, yidx});
          }
        }
      }
    }
  }



  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      mem0(vis);
      if (!vis[i][j])
      {
        dfs(i, j, -1, -1);
      }
    }
  }
  cout << "No" << nl;

  return 0;

}
