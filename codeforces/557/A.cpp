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

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n;
  cin >> n;
  int x, y, z;
  int min[3], max[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> min[i] >> max[i];
  }
  x = y = z = 0;
  z = min[2];
  x = min[0];
  y = min[1];
  int sum = x + y + z;
  if (x + y + z == n)
    cout << x << " " << y << " " << z;
  if (x + y + z < n)
  {
    if (n - sum <= max[0] - min[0])
    {
      x += n - sum;
      sum = n;
      cout << x << " " << y << " " << z;
      return 0;
    }
    else if (n - sum > max[0] - min[0])
    {
      x = max[0];
      sum += max[0] - min[0];
    }
    if (n - sum <= max[01] - min[01])
    {
      y += n - sum;
      sum = n;
      cout << x << " " << y << " " << z;
      return 0;
    }
    else if (n - sum > max[01] - min[01])
    {
      y = max[01];
      sum += max[01] - min[01];
    }
    if (n - sum <= max[02] - min[02])
    {
      z += n - sum;
      sum = n;
      cout << x << " " << y << " " << z;
      return 0;
    }
    else if (n - sum > max[02] - min[02])
    {
      z = max[02];
      sum += max[02] - min[02];
    }
    cout << x << " " << y << " " << z;

  }




  return 0;

}




