#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define nl                "\n"
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()
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
#define rev               greater<int>()
#define Max(x,y,z)        max(x,max(y,z))
#define Min(x,y,z)        min(x,min(y,z))
#define imin              INT_MIN
#define imax              INT_MAX
#define Yes               cout<<"Yes\n"
#define No                cout<<"No\n"
#define YES               cout<<"YES\n"
#define NO                cout<<"NO\n"
#define yes               cout<<"yes\n"
#define no                cout<<"no\n"
#define show(A) for (auto i: A) cout << i << " "; cout << '\n';
#define endl "\n"

using ld = long double;
using vi = vector < int > ;
using mi = map < int, int > ;
using pi = pair < int, int > ;

const double Pi = acos(-1.0);
const int inf = 1e18 + 1;
const int M = 1e9 + 7;
const int MM = 998244353;

const int N = 1e5 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
/*--------------------------------------------------------------------------------------------------*/
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*--------------------------------------------------------------------------------------------------*/

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int T;
  cin >> T;
  while (T--)
  {
    int n, k;
    cin >> n >> k;
    int val[n + 2];
    int t[n + 2], a[k];
    int pre[n + 2] {0};
    for (int i = 0; i < k; i++)
    {
      cin >> a[i];
      pre[a[i]] = 1;
    }
    // cout << t[1] << nl;
    for (int i = 0; i < k; i++)
    {
      int d;
      cin >> d;
      t[a[i]] = d;
    }
    int l[n + 2];
    int r[n + 2];
    l[1] = inf;
    r[n] = inf;
    if (pre[1] == 1)
      l[1] = t[1];
    for (int i = 2; i <= n; i++)
    {
      if (pre[i] == 1)
        l[1] = min(l[1], t[i] + i - 1LL);
    }
    if (pre[n] == 1)
      r[n] = t[n];
    for (int i = n - 1; i >= 1; i--)
    {
      if (pre[i] == 1)
      {
        r[n] = min(r[n], t[i] + n - i);
      }
    }


    for (int i = 2; i <= n; i++)
    {
      if (pre[i] == 1)
        l[i] = min(l[i - 1] + 1LL, t[i]);
      else
        l[i] = l[i - 1] + 1LL;
    }
    for (int i = n - 1; i >= 1; i--)
    {
      if (pre[i] == 1)
        r[i] = min(r[i + 1] + 1LL, t[i]);
      else
        r[i] = r[i + 1] + 1LL;
    }
    for (int i = 1; i <= n; i++)
    {
      cout << min(r[i], l[i]) << " ";
    }
    cout << nl;

  }







  return 0;

}

