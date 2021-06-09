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
#define sz(x) (int)(x).size()
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


set<int> possible;


void search(int day, pair<int, vector<int>> x, pair<int, vector<int>> y) {

  if (day == 4) {

    possible.insert(x.first);

    return;

  }

  for (int i = 0; i < int((x.second).size()); i++) {

    int t = x.second[i];

    vector<int> X = x.second; X.erase(begin(X) + i);

    vector<int> Y = y.second; Y.push_back(t);

    search(day + 1, {y.first + t, Y}, {x.first - t, X});

  }

}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   setIO("backforth");
// #endif

  int n;
  cin >> n;
  int a[2 * n];
  for (int i = 0; i < 2 * n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + 2 * n);
  int cmin = INT_MAX;
  for (int i = 0; i < 2 * n; i++)
  {
    for (int j = i + 1; j < 2 * n; j++)
    {
      int arr[2 * n - 2];
      int idx = 0;
      for (int k = 0; k < 2 * n; k++)
      {
        if (k != i && k != j)
        {
          arr[idx] = a[k];
          idx++;
        }
      }
      int t = 0;
      for (int k = 0; k <= 2 * n - 4; k += 2)
      {
        t += arr[k + 1] - arr[k];
      }
      cmin = min(cmin, t);
    }
  }
  cout << cmin << nl;




  return 0;

}