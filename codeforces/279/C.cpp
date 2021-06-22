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

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n, m;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> u, d;
  u.pb(1);
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[i - 1])
      u.pb(i + 1);
    if (a[i] < a[i - 1])
      d.pb(i + 1);
  }
  for (int t = 1; t <= m; t++)
  {
    int x, y;
    cin >> x >> y;
    int fd, lu;
    fd = lower_bound(all(d), x + 1) - d.begin();
    lu = upper_bound(all(u), y) - u.begin() - 1;
    if (fd == d.size() || lu == -1)
    {
      cout << "Yes" << nl;
    }
    else if (u[lu] > d[fd])
    {
      cout << "No" << nl;
    }
    else
      cout << "Yes" << nl;


  }










  return 0;

}
