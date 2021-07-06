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

const double pi = acos(-1.0);
const long long INF = 1e18;
const int32_t M = 1e8;
const int32_t MM = 998244353;

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

vector<int> v;
void lucky()
{
  v.pb(4);
  v.pb(7);
  int r = 1;
  vector<int> d;
  d.pb(4);
  d.pb(7);
  for (int i = 10; i <= 1000000; i *= 10)
  {
    int x = 4 * i;
    int y = 7 * i;
    vector<int> e;
    for (int j = 0; j < d.size(); j++)
    {
      e.pb(x + d[j]);

    }
    for (int j = 0; j < d.size(); j++)
    {
      e.pb(y + d[j]);
    }
    for (int f = 0; f < e.size(); f++)
    {
      v.pb(e[f]);
    }
    d.clear();
    d = e;
  }
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  lucky();
  int n;
  cin >> n;
  int a[n];
  mem1(a);
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == -1)
    {
      int k = 0;
      for (int j = i; j < n; j += v[k])
      {
        a[j] = c;
      }
      c++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    char s = 'a' + a[i];
    cout << s;
  }




  return 0;

}




