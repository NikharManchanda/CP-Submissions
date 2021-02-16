#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define mp make_pair
#define pb push_back
#define lim 100006
#define all(con) con.begin(),con.end()
//typedef tree<ll, null_type, less<ll>, rb_tree_tag,
//tree_order_statistics_node_update > is;
//Indexed Set(is)
//(idx or we can say order)
//Declaration -> is p;
//Returns iterator to the element at idx i -->  p.find_by_order(i);
//Returns the Value at idx i               --> *p.find_by_order(i);
//Returns the Index of number x            -->  p.order_of_key(x) ;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
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



  /*
  #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  #endif
  */

  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n + 1], b[n + 1];
    ll p[n + 1];
    a[0] = 0;
    b[0] = 0;
    p[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
      cin >> a[i];
      b[i] = a[i];
    }
    sort(b , b + n + 1);

    for (ll i = 1; i <= n; i++)
    {
      p[i] = p[i - 1] + b[i];
    }
    ll ans = a[n];
    ll s = 1;
    ll e = n;
    while (s <= e && s >= 1 && e <= n)
    {
      ll mid = s + (e - s) / 2;
      ll f = 0;
      ll z = p[mid];
      for (ll j = mid + 1; j <= n; j++)
      {
        if (z >= b[j])
        {
          z += b[j];
        }
        else
        {
          f = 1;
          break;
        }
      }
      if (f == 0)
      {
        ans = b[mid];
        e = mid - 1 ;
      }
      else
      {
        s = mid + 1;
      }
    }
    /*
    for (ll i = 1; i <= n; i++)
    { ll f = 0;
      ll z = p[i];
      for (ll j = i + 1; j <= n; j++)
      {
        if (z >= b[j])
        {
          z += b[j];
        }
        else
        {
          f = 1;
          break;
        }
      }
      if (f == 0)
      {
        ans = b[i];
        break;
      }
    }*/
    vector<long long int> v;
    for (ll i = 1; i <= n; i++)
    {
      if (a[i] >= ans)
      {
        v.pb(i);
      }
    }
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (auto w : v)
    {
      cout << w << " ";
    }
    cout << endl;





  }







  return 0;


}