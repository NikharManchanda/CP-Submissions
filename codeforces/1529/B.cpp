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
#define sint(t) scanf("%d",&t)
#define slint(t) scanf("%ld",&t)
#define sllint(t) scanf("%lld",&t)
#define sch(t) scanf("%c",&t)
#define sstr(t) scanf("%s",t)
#define sf(t) scanf("%f",&t)
#define slf(t) scanf("%lf",&t)
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define nl "\n"
#define mp make_pair
#define pb push_back
// #define INF (int)1e9
#define EPS 1e-9
#define mod 1000000007
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
void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*------------------------------------------------------------------*/

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE

//   setIO("censor");
// #endif

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a, a + n);
    int cmin = INT_MAX;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] <= 0)
        c++;
      else
        break;
    }
    int x = -1;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > 0)
      {
        x = a[i];
        idx = i;
        break;
      }
    }
    if (x == -1)
    {
      cout << c << endl;
      continue;
    }

    for (int i = 1; i < idx; i++)
    {
      cmin = min(cmin, abs(a[i] - a[i - 1]));
    }
    if (cmin >= x)
    {
      int cx = 0;
      for (int i = idx; i < n; i++)
      {
        if (a[i] == x)
          cx++;
      }
      if (cmin == 0)
        c += cx;
      else
        c++;
      cout << c << endl;
    }
    else
    {
      cout << c << endl;
    }






  }






  return 0;

}