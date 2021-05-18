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
#include <limits>
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
#define INF (int)1e9
#define EPS 1e-9
#define mod 1000000007
#define imax INT_MAX
#define imin INT_MIN
const double pi = acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
/*******  Input streaming function for usaco *******/
void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*------------------------------------------------------------------*/

struct rect
{
  long long int x1, x2, y1, y2;
  long long int area() {return abs(x1 - x2) * abs(y1 - y2);}
};

long long int inter(struct rect a, struct rect b)
{
  long long int cmnx = max((long long int)0, min(a.x2, b.x2) - max(a.x1, b.x1));
  long long int cmny = max((long long int)0, min(a.y2, b.y2) - max(a.y1, b.y1));
  long long int area = cmnx * cmny;
  return area;
}
long long int  inters(rect a, rect b, rect c) {
  long long  xOverlap = max(min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1), (long long )0);
  long long yOverlap = max(min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1), (long long)0);
  return xOverlap * yOverlap;
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE

//   setIO("billboard");

// #endif


  rect a, b, c;
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
  if (a.area() - inter(a, b) > inter(a, c) - inters(a, b, c))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;

}