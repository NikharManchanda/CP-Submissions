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

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
int n, m, k;
char a[505][505];


void dfs(int i, int j)
{
  if (k == 0)
  {
    return ;
  }


  a[i][j] = 'X';
  k--;
  int deg = 0;
  int nx, ny, x1, y1;
  for (int s = 0; s < 4; s++)
  {

    nx = i + dx[s];
    ny = j + dy[s];
    if (nx >= 0 && ny >= 0 && nx < n && ny < m && a[nx][ny] == '.')
    {
      dfs(nx, ny);
    }
  }

}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");


  cin >> n >> m >> k;
  int t = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == '.')
        t++;
    }
  }
  k = t - k;
  while (k > 0)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {

        if (a[i][j] == '.')
        {
          dfs(i, j);
          break;
        }

      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 'X')
        cout << '.';
      else if (a[i][j] == '.')
        cout << "X";
      else
        cout << a[i][j];
    }
    cout << nl;
  }



  return 0;

}
