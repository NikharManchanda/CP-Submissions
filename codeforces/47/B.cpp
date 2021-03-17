#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl "\n"
#define mp make_pair
#define pb push_back
#define lim 100008
#define all(con) con.begin(),con.end()
#define rall(con) con.rbegin(),con.rend()
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> is;
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
long long mod = 1000000007;
const double pi = acos(-1.0);
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);




  // #ifndef ONLINE_JUDGE

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  // #endif



  string a, b, c;
  cin >> a;
  cin >> b >> c;
  map<char, int> m;
  if (a[1] == '>')
  {
    m[a[0]]++;
  }
  else
  {
    m[a[2]]++;
  }
  if (b[1] == '>')
  {
    m[b[0]]++;
  }
  else
  {
    m[b[2]]++;
  }
  if (c[1] == '>')
  {
    m[c[0]]++;
  }
  else
  {
    m[c[2]]++;
  }
  if (m['A'] == 1 && m['B'] == 1 && m['C'] == 1)
  {
    cout << "Impossible";
    return 0;
  }
  char k;
  int cmax = 0;
  vector<char> v;
  for (auto x : m)
  {
    if (x.second > cmax)
    {
      cmax = x.second;
      k = x.first;
    }
  }
  v.pb(k);
  int f = 0;
  if (a[0] != k && a[2] != k)
  {
    if (a[1] == '<')
    {
      v.pb(a[2]);
      v.pb(a[0]);
    }
    else
    {
      v.pb(a[0]);
      v.pb(a[2]);
    }
    f = 1;
  }
  if (b[0] != k && b[2] != k && f == 0)
  {
    if (b[1] == '<')
    {
      v.pb(b[2]);
      v.pb(b[0]);
    }
    else
    {
      v.pb(b[0]);
      v.pb(b[2]);
    }
    f = 1;
  } if (c[0] != k && c[2] != k && f == 0)
  {
    if (c[1] == '<')
    {
      v.pb(c[2]);
      v.pb(c[0]);
    }
    else
    {
      v.pb(c[0]);
      v.pb(c[2]);
    }
    f = 1;
  }
  reverse(all(v));
  if (v.size() == 3)
  {
    for (auto x : v)
      cout << x;
  }
  else
  {
    cout << "Impossible";
  }



  return 0;


}