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
long long arr[10] = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};
ll fun(string s)
{
  ll ans = 0;
  ll n = s.length();
  for (ll i = 0; i < n; i++)
  {
    ll v = n - i - 1;
    ans += (s[i] - '0') * arr[v];
  }
  return ans;
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   setIO("notlast");
// #endif
  ll t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;

    ll x = fun(a);
    ll y = fun(b);
    cout << y - x << nl;



  }


  return 0;

}