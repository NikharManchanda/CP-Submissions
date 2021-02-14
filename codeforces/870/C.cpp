#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define pb push_back
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
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


  int q;
  cin >> q;
  bool prime[lim];
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = 0;
  for (int i = 2; i * i <= lim - 1; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= lim - 1; j += i)
      {
        prime[j] = 0;
      }
    }
  }

  int dp[16] {0};
  dp[0] = 0;
  dp[1] = -1, dp[2] = -1, dp[3] = -1;
  for (int i = 4; i <= 15; i++)
  {
    for (int j = 1; j <= i; j++)
    {

      if (dp[j] != -1)
      {
        if (i == j && prime[j] == 0)
        {
          dp[i] = 1;
          break;
        }
        else if (i == j && prime[j] == 1)
        {
          dp[i] = -1;
          break;
        }
        if (dp[i - j] != -1)
        {
          dp[i] = dp[i - j] + dp[j];
          break;
        }
      }
    }
  }

  while (q--)
  {
    int n;
    cin >> n;
    if (n < 16) {
      cout << dp[n] << '\n';
    } else {
      int t = (n - 16) / 4 + 1;
      cout << t + dp[n - 4 * t] << '\n';
    }

  }



  return 0;


}