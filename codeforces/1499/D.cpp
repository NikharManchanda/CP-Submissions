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

const int N = 2e7 + 5;

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

int prime[N];
int val[N];
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
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");
  int t;
  cin >> t;
  prime[1] = 1;
  for (int i = 2; i < N; i++)
  {
    if (prime[i] == 0)
    {
      for (int j = i; j < N; j += i)
      {
        if (prime[j] == 0)
          prime[j] = i;
      }
    }
  }
  for (int i = 2; i < N; i++)
  {
    int j = i / prime[i];
    val[i] = val[j];
    if (prime[i] != prime[j])
      val[i]++;
  }
  for (int r = 1; r <= t; r++)
  {
    int c, d, x;
    int ans = 0;
    cin >> c >> d >> x;
    for (int i = 1; i * i <= x; i++)
    {
      if (x % i == 0)
      {
        int k1, k2;
        k1 = x / i + d;
        if (k1 % c == 0)
          ans = ans + binpow(2, val[k1 / c]);
        if (i * i == x)continue;
        k2 = i + d;
        if (k2 % c == 0)
          ans += binpow(2, val[k2 / c]);
      }
    }
    cout << ans << nl;
  }


  return 0;

}

