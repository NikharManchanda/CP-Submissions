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
const double pi = acos(-1.0);
const long long INF = 1e18;
const int32_t M = 1e8;
const int32_t MM = 998244353;

const int N = 1e5 + 5;

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


signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");


  int n;
  cin >> n;
  vector<pair<pair<int, int> , int>> v;
  for (int i = 1; i <= n; i++)
  {
    int t;
    cin >> t;
    int x, y;
    cin >> x >> y;
    v.pb({{x, y}, t});
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      pair<int, int> x, y, z, w;
      if (v[i].sc == 1)
      {
        x = {v[i].fr.fr, 1};
        y = {v[i].fr.sc, 1};
      }
      else if (v[i].sc == 2)
      {
        x = {v[i].fr.fr, 1};
        y = {v[i].fr.sc, 0};
      }
      else if (v[i].sc == 3)
      {
        x = {v[i].fr.fr, 0};
        y = {v[i].fr.sc, 1};
      }
      else
      {
        x = {v[i].fr.fr, 0};
        y = {v[i].fr.sc, 0};
      }


      if (v[j].sc == 1)
      {
        z = {v[j].fr.fr, 1};
        w = {v[j].fr.sc, 1};
      }
      else if (v[j].sc == 2)
      {
        z = {v[j].fr.fr, 1};
        w = {v[j].fr.sc, 0};
      }
      else if (v[j].sc == 3)
      {
        z = {v[j].fr.fr, 0};
        w = {v[j].fr.sc, 1};
      }
      else
      {
        z = {v[j].fr.fr, 0};
        w = {v[j].fr.sc, 0};
      }
      if (w.fr < x.fr)
      {
        continue;
      }
      else if (w.fr >= x.fr && w.fr <= y.fr)
      {
        if (w.fr == x.fr)
        {
          if (w.sc == 0 || x.sc == 0)
            continue;
          else
            c++;
        }
        else
          c++;
      }
      else if (w.fr >= y.fr && z.fr <= y.fr)
      {
        if (z.fr == y.fr)
        {
          if (z.sc == 0 || y.sc == 0)
            continue;
          else
            c++;
        }
        else
        {
          c++;
        }
      }
      else if (z.fr > y.fr)
      {
        continue;
      }

    }
  }
  cout << c << nl;




  return 0;

}


