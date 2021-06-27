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

const int N = 1e6 + 5;

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
int ct[N + 4];
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n;
  cin >> n;
  int k;
  cin >> k;
  int ans = 0;
  map<set<pair<int, int> > , int > mp;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    set<pair<int, int> > l;
    int v = x;
    for (int j = 2; j * j <= x; j++)
    {
      int c = 0;
      while (x % j == 0)
      {
        c++;
        x = x / j;
      }
      if (c % k != 0)
        l.insert({j, c % k});
    }
    if (x > 1)
    {
      l.insert({x, 1});
    }
    set<pair<int, int> > s;
    for (auto g : l)
    {
      int q = g.fr, w = g.sc;
      s.insert({q, k - w});
    }
    ans += mp[s];
    mp[l]++;
  }
  cout << ans;



  return 0;

}


