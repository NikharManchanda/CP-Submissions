#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lim 100006
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

vector<ll> pfactors(ll n)
{
  vector<ll> R;
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
  return R;
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

  int n;
  cin >> n;
  int a, b;
  cin >> a >> b;
  int x[n];
  if (a < b)
    swap(a, b);
  for (int i = 0; i < n; i++)
    cin >> x[i];
  double s = 0, u = 0;
  sort(x, x + n, greater<int>());
  for (int i = 0; i < b; i++)
  {

    s += x[i];
  }
  for (int i = b; i < a + b; i++)
  { u += x[i];

  }
  double i = s / b, j = u / a;
  cout << fixed << setprecision(8) << i + j;



  return 0;


}


