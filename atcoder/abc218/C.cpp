#include "bits/stdc++.h"
using namespace std;
/*------------------------------------------------------------*/
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
/*------------------------------------------------------------------*/
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

const int N1 = 1e6 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
/*----------------------------------------------------------*/
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
void local()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
/*--------------------------------------------------------*/

char a[205][205];
char b[205][205];
bool check(int n)
{
  vector<pair<int, int> > va, vb;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (b[i][j] == '#')
        vb.pb({i, j});
      if (a[i][j] == '#')
        va.pb({i, j});
    }
  }

  if (va.size() != vb.size())
    return 0;
  if (va.size() == 0)
    return 1;
  if (va.size() == 1)
  {
    if (va[0].fr - vb[0].fr == 0)
      return 1;
    if (va[0].sc - vb[0].sc == 0)
      return 1;
    return 0;
  }
  int diffx = (va[0].fr - vb[0].fr) ;
  int diffy = (va[0].sc - vb[0].sc) ;

  for (int i = 1; i < va.size(); i++)
  {
    if (diffx != (va[i].fr - vb[i].fr) || diffy != (va[i].sc - vb[i].sc))
      return 0;
  }

  return 1;
}
void rotate(int N)
{
  // Consider all squares one by one
  for (int x = 0; x < N / 2; x++) {
    // Consider elements in group
    // of 4 in current square
    for (int y = x; y < N - x - 1; y++) {
      // Store current cell in
      // temp variable
      int temp = b[x][y];

      // Move values from right to top
      b[x][y] = b[y][N - 1 - x];

      // Move values from bottom to right
      b[y][N - 1 - x]
        = b[N - 1 - x][N - 1 - y];

      // Move values from left to bottom
      b[N - 1 - x][N - 1 - y]
        = b[N - 1 - y][x];

      // Assign temp to left
      b[N - 1 - y][x] = temp;
    }
  }
}
signed main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> b[i][j];
  }

  bool x = 0;
  x = check(n);
  if (x)
  {
    Yes;
    return 0;
  }
  rotate(n);
  x = check(n);
  if (x)
  {
    Yes;
    return 0;
  }
  rotate(n);
  x = check(n);

  if (x)
  {
    Yes;
    return 0;
  }
  rotate(n);
  x = check(n);

  if (x)
  {
    Yes;
    return 0;
  }
  rotate(n);
  x = check(n);

  if (x)
  {
    Yes;
    return 0;
  }
  No;

  return 0;

}