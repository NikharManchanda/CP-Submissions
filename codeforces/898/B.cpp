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

  ll a, b, c;

  cin >> c >> a >> b ;
  ll o = a;
  ll p = b;
  if (c % (__gcd(a, b)) != 0)
  {
    cout << "NO";
  }
  else
  {
    if (c % a == 0 )
    {
      cout << "YES" << endl;
      cout << c / a << " " << 0 << endl;
      return 0;
    }
    if (c % b == 0 )
    {
      cout << "YES" << endl;
      cout << 0 << " " << c / b << endl;
      return 0;
    }

    if (a > b)
      swap(a, b);
    ll x, y, d = gcd(a, b, x, y);
    if (a * x + b * y != d)
    {
      swap(x, y);
    }
    ll n, m;
    n = x * (c / d);
    m = y * (c / d);
    //cout << d << " " << x << " " << y << " " << n << " " << m << endl;
    if (n < 0 && m < 0)
    {
      cout << "NO";
    }
    else if (n >= 0 && m >= 0)
    {
      cout << "YES" << endl;
      if (o * n + p * m == c)
      {
        cout << n << " " << m;
      }
      else if (o * m + p * n == c)
      {
        cout << m << " " << n;
      }
    }
    else if (n == 0 || m == 0)
    {
      cout << "YES" << endl;
      if ((o * n + p * m) == c)
      {
        cout << n << " " << m;
      }
      else if ((o * m + p * n) == c)
      {
        cout << m << " " << n;
      }

    }

    else
    {

      ll k;

      if (n < 0)
      {
        k = (abs(n)) * d;

        if (k % b == 0)
          k = k / b;
        else
        {
          k = k / b + 1;
        }
        if (m - (k * a) / d <= 0)
        {
          cout << "NO";
        }
        else
        {

          cout << "YES" << endl;
          ll i = n + k * (b) / d ;
          ll j = m - k * (a) / d;
          //cout << n << " " << k << " " << i << endl;
          //cout << a * i + b * j << " " << c << endl;
          if (o * i + p * j == c)
          {
            cout << i << " " << j;
          }
          else if (o * j + p * i == c)
          {
            cout << j << " " << i;
          }

        }
      }
      else if (m < 0)
      {
        k = abs(m) * d;
        if (k % a == 0)
          k = k / a;
        else
          k = 1 + k / a;
        if (n - (k * b) / d <= 0)
        {
          cout << "NO";
        }
        else
        {
          cout << "YES" << endl;
          ll i = n - k * (b) / d ;
          ll j = m + k * (a) / d;
          if (o * i + p * j == c)
          {
            cout << i << " " << j;
          }
          else if (o * j + p * i == c)
          {
            cout << j << " " << i;
          }
        }
      }

    }

  }

  return 0;


}


