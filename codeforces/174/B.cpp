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

  string s;
  cin >> s;
  int lidx = -1;
  int c = 0;
  int f = 1;
  int x = 0;
  int p = 0;
  int sidx = 0;
  int sidx2 = 0;
  for (int i = sz(s) - 1; i >= 0; i--)
  {
    x++;
    if (s[i] == '.')
    {

      sidx2 = i;
      p = 1;
      x--;
      if (x <= 3 && x >= 1)
      {
        break;
      }
      else
      {
        NO;
        return 0;
      }
    }
  }
  if (p == 0)
  {
    NO;
    return 0;
  }
  x = 0;
  for (int i = 0; i < sz(s); i++)
  {
    x++;
    if (s[i] == '.')
    {
      sidx = i;
      x--;
      if (x >= 1 && x <= 8)
      {
        break;
      }
      else
      {
        NO;
        return  0;
      }
    }
  }
  int fidx = 0;
  lidx = sidx;
  for (int i = sidx + 1; i < sz(s); i++)
  {
    if (s[i] == '.')
    {
      fidx = i;
      int bc = i - lidx - 1;
      if (bc > 11 || bc < 2)
      {
        NO;
        f = 0;
        return 0;
      }
      lidx = i;
    }
  }
  vector<string> ans;
  lidx = -1;
  c = 0;
  for (int i = 0; i < sz(s); i ++)
  {
    if (s[i] == '.')
    {
      int bc = i - lidx - 1;
      string z;

      int nidx = -1;
      z = s.substr(lidx + 1, bc + 1);
      for (int j = i + 3; j <= i + 4 && j < sz(s); j++)
      {
        if (s[j] == '.')
        {
          nidx = j;
          break;
        }
      }
      if (nidx == -1)
      {
        z = z + s.substr(i + 1, 3);
        lidx = i + 3;
      }
      else
      {
        if (nidx == i + 3)
        {
          z = z + s[i + 1];
          lidx = i + 1;
        }
        else if (nidx == i + 4)
        {
          z = z + s[i + 1] + s[i + 2];
          lidx = i + 2;
        }
      }
      ans.pb(z);

    }

  }
  YES;
  for (auto r : ans )
    cout << r << nl;



  return 0;

}




