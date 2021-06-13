/****************************************************************************************************************
                                     ██████╗░░█████╗░██╗░░██╗██╗░░██╗██╗███╗░░██╗
                                     ██╔══██╗██╔══██╗██║░░██║██║░██╔╝██║████╗░██║
                                     ██████╔╝███████║███████║█████═╝░██║██╔██╗██║
                                     ██╔══██╗██╔══██║██╔══██║██╔═██╗░██║██║╚████║
                                     ██║░░██║██║░░██║██║░░██║██║░╚██╗██║██║░╚███║
                                     ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝
****************************************************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
/*******  All Required define Pre-Processors and typedef Constants *******/
#define sll(t) scanf("%d",&t)
#define slll(t) scanf("%ld",&t)
#define sllll(t) scanf("%lld",&t)
#define sch(t) scanf("%c",&t)
#define sstr(t) scanf("%s",t)
#define sf(t) scanf("%f",&t)
#define slf(t) scanf("%lf",&t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (ll i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define nl "\n"
// #define mp make_pair
#define pb push_back
#define INF (ll)1e9
#define EPS 1e-9
#define mod 1000000007
#define sz(x) (ll)(x).size()
const double pi = acos(-1.0);
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll, ll> mpii;
typedef set<ll> seti;
typedef multiset<ll> mseti;
/*******  Input streaming function for usaco *******/
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*------------------------------------------------------------------*/
long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}
vector<ll> adj[400001];
ll vis[400001];
void dfs(ll x)
{
  vis[x] = 1;
  for (auto u : adj[x])
  {
    if (!vis[u])
    {
      dfs(u);
    }
  }

}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   setIO("outofplace");
// #endif


  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n], b[n];
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
      adj[i].clear();
    }
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
      adj[a[i]].pb(b[i]);
      adj[b[i]].pb(a[i]);
    }
    ll c = 0;
    for (ll i = 1; i <= n; i++)
    {
      if (!vis[i])
      {
        c++;
        dfs(i);
      }
    }
    cout << binpow(2, c, mod) << nl;
  }




  return 0;

}