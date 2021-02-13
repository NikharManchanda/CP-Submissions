#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
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
        R.PB(i);
        n = n / i;
      }
    }
  }
  if (n > 1)R.PB(n);

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

  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
    cin >> s[i];
  int g = s[0].length();
  int ans = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    string str = s[i];
    int a = 0;
    for (int j = 0; j < n; j++)
    {
      int v = 0;

      if (j != i)
      {

        string h = s[j];
        while (h != s[i] && v <= g)
        {
          v++;
          char c = h[0];
          h = h.substr(1, g - 1);
          h += (c);
        }
        if (v > g)
        {
          cout << -1;
          return 0;
        }
        //cout << v << " ";
        a += v;
      }
      //cout << a << " ";

    }
    ans = min(ans, a);

  }
  cout << ans;


  return 0;


}
