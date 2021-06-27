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
#define lcm(a, b)         ((a) * ((b)/ __gcd(a, b)))
#define rev               greater<int>()
#define Max(x,y,z)        max(x,max(y,z))
#define Min(x,y,z)        min(x,min(y,z))
const double pi = acos(-1.0);
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 2e6 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};



template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}


void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*--------------------------------------------------------------------------------------------------*/
int binpow(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}
map<int, vector<int> > mp;
map<int, int> ma;
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    for (int i = 2; i * i <= x; i++)
    {
      int c = 0;
      while (x % i == 0)
      {
        c++;
        x = x / i;
      }
      if (c != 0)
      { ma[i]++;
        mp[i].pb(c);
      }
    }
    if (x > 1)
    {
      ma[x]++;
      mp[x].pb(1);
    }
  }
  int ans = 1;
  for (auto x : mp)
  {
    int val = x.fr;
    if (ma[val] < n - 1)
      continue;
    vector<int> v;
    v = x.sc;
    sort(all(v));
    if (ma[x.fr] == n - 1)
      ans = ans * binpow(x.fr, v[0]);
    else
      ans = ans * binpow(x.fr, v[1]);
  }

  cout << ans;

  return 0;

}

