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
  int b[n];
  mem0(b);
  int pro = 1;
  for (int i = 1; i <= n - 1; i++)
  {
    if (__gcd(i, n) == 1)
    {
      b[i] = 1;
      pro = pro * i;
      pro = pro % n;
    }
  }
  if (pro != 1)
  {
    b[pro] = 0;
  }
  int c = 0;
  for (int i = 1; i <= n - 1; i++)
  {
    if (b[i])c++;
  }
  cout << c << nl;
  for (int i = 1; i <= n - 1; i++)
    if (b[i])cout << i << " ";

  return 0;

}


