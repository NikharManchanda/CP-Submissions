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
namespace number_theory {
ll gcd(ll x, ll y) {
  if (x == 0) return y;
  if (y == 0) return x;
  return gcd(y, x % y);
}
bool isprime(ll n) {
  if (n <= 1) return false;
  if (n <= 3) return true;

  if (n % 2 == 0 || n % 3 == 0) return false;

  for (ll i = 5; i * i <= n; i += 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

bool prime[15000105];
void sieve(int n) {
  for (ll i = 0; i <= n; i++) prime[i] = 1;
  for (ll p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
      for (ll i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }
  prime[1] = prime[0] = 0;
}

vector<ll> primelist;
bool __primes_generated__ = 0;

void genprimes(int n) {
  __primes_generated__ = 1;
  sieve(n + 1);
  for (ll i = 2; i <= n; i++) if (prime[i]) primelist.push_back(i);
}

vector<ll> factors(ll n) {
  if (!__primes_generated__) {
    cerr << "Call genprimes you dope" << endl;
    exit(1);
  }
  vector<ll> facs;

  for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
    if (n % primelist[i] == 0) {
      while (n % primelist[i] == 0) {
        n /= primelist[i];
        facs.push_back(primelist[i]);
      }
    }
  }
  if (n > 1) {
    facs.push_back(n);
  }
  sort(facs.begin(), facs.end());
  return facs;
}

// vector<ll> getdivs(ll n) {
//   vector<ll> divs;
//   for (ll i = 1; i * i <= n; i++) {
//     if (n % i == 0) {
//       divs.push_back(i);
//       divs.push_back(n / i);
//     }
//   }

//   getunique(divs);
//   return divs;
// }
}
using namespace number_theory;
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   setIO("notlast");
// #endif
  genprimes(1e6);
  ll t;
  cin >> t;
  while (t--)
  {
    ll x, y, k;
    cin >> x >> y >> k;
    if (k == 0)
    {
      if (x == y)
      {
        cout << "YES" << nl;
      }
      else
      {
        cout << "NO" << nl;
      }
    }
    else if (k == 1)
    {
      ll a = max(x, y);
      ll b = min(x, y);
      if (a % b == 0 && a != b)
      {
        cout << "YES" << nl;
      }
      else
      {
        cout << "NO" << nl;
      }
    }
    else
    {

      vector<ll> a = factors(x), b = factors(y);
      if (a.size() + b.size() >= k)
      {
        cout << "YES" << nl;
      }
      else
      {
        cout << "NO" << nl;
      }
    }
  }


  return 0;

}