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



template<typename T> T gcd(T a, T b) { if (a == 0) return b; return gcd(b % a, a); }
template<typename T> T pow(T a, T b, int m) {T ans = 1; while (b > 0) { if (b % 2 == 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans % m; }

void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*--------------------------------------------------------------------------------------------------*/

int n1, n2, k1, k2;

int dp[105][105][2][15];

int count(int r1, int r2, int lasttype, int lastn) {
  int &c = dp[r1][r2][lasttype][lastn];

  if (c == -1) {
    c = 0;
    // place r1
    if (r1 > 0) {
      if (lasttype == 1) {
        c += count(r1 - 1, r2, 0, 1); c %= M;
      } else if (lastn < k1) {
        c += count(r1 - 1, r2, 0, lastn + 1); c %= M;
      }
      c %= M;
    }
    //place r2
    if (r2 > 0) {
      if (lasttype == 0) {
        c += count(r1, r2 - 1, 1, 1); c %= M;
      } else if (lastn < k2) {
        c += count(r1, r2 - 1, 1, lastn + 1); c %= M;
      }
      c %= M;
    }

    if (r1 == 0 && r2 == 0) {
      //all done!
      c = 1;
    }
    c %= M;
  }
  return c % M;
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  cin >> n1 >> n2 >> k1 >> k2;
  memset(dp, -1, sizeof(dp));

  cout << count(n1, n2, 0, 0) ;



  return 0;

}
