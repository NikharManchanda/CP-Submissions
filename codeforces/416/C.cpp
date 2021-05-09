#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define mp make_pair
#define pb push_back
#define lim 200008
#define all(con) con.begin(),con.end()
#define rall(con) con.rbegin(),con.rend()

// typedef tree<ll, null_type, less<ll>, rb_tree_tag,
//         tree_order_statistics_node_update> is;
//Indexed Set(is)
//(idx or we can say order)
//Declaration -> is p;
//Returns iterator to the element at idx i -->  p.find_by_order(i);
//Returns the Value at idx i               --> *p.find_by_order(i);
//Returns the Index of number x            -->  p.order_of_key(x) ;
typedef long long ll ;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef map<ll, ll> mi;
typedef deque<ll> di;
typedef deque<ii> dii;
const ll MOD = 1e9 + 7;
const ll mod = 1e9 + 7;
const double pi = acos(-1.0);
ll dx[8] {1, 0, -1, 0, 1, -1, 1, -1};
ll dy[8] {0, 1, 0, -1, -1, 1, 1, -1};
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

ll C(ll n,   ll k)
{
  ll res = 1;

  // Since C(n, k) = C(n, n-k)
  if (k > n - k)
    k = n - k;

  // Calculate value of
  // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
  for (ll i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }

  return res;
}

ll gcd(ll a, ll b , ll &x , ll &y)
{
  if (a == 0)
  {
    x = 0;
    y = 1;
    return b;
  }

  ll x1, y1;
  ll d = gcd(b % a, a, x1, y1);
  y = x1;
  x = y1 - (b / a) * x1;
  return d;
}

void pfactors(ll n , vector<ll> &R)
{

  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
      {
        R.pb(i);
        n = n / i;
      }
    }
  }
  if (n > 1)R.pb(n);

  return ;
}


bool isPrime(ll n)
{
  // Corner cases
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  // This is checked so that we can skip
  // middle five numbers in below loop
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (ll i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}
/*------------------------------------------------------------------*/


bool comp(pair<pair<ll, ll>, ll> p1, pair<pair<ll, ll>, ll> p2)
{
  if (p1.first.second == p2.first.second)
  {
    return p1.first.first < p2.first.first;
  }
  return p1.first.second > p2.first.second;
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  ll n;
  cin >> n;
  vector< pair < pair<ll, ll>, ll> > v;
  for (ll i = 0; i < n; i++)
  {
    ll x, y;
    cin >> x >> y;
    v.pb({{x, y}, i + 1});
  }
  sort(all(v), comp);
  ll k;
  cin >> k;
  vector<pair<int, int> > a;
  for (ll i = 0; i < k; i++)
  {
    int g;
    cin >> g;
    a.pb({g, i + 1});
  }
  sort(all(a));
  ll vis[k] {0};
  vector<pair<ll, ll> > ans;
  ll c = 0;
  for (ll i = 0; i < n; i++)
  {
    ll f = v[i].first.first;
    ll val = v[i].first.second;
    for (ll j = 0; j < k; j++)
    {
      if (vis[j] == 0 && a[j].first >= f)
      {
        c += val;
        vis[j] = 1;
        ans.pb({v[i].second, a[j].second});
        break;
      }
    }
  }


  cout << ans.size() << " " << c << endl;
  for (auto x : ans)
  {
    cout << x.first << " " << x.second << endl;
  }










  return 0;

}