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
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        cin >> a[i][j];
      }
    }

    ll c[n][m];
    memset(c, -1, sizeof(c));
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        if (c[i][j] != -1 )
        {
          c[i][m - j - 1] = c[i][j] ;
          c[n - i - 1][j] = c[i][j] ;
          c[n - i - 1][m - j - 1] = c[i][j];
          continue;
        }
        ll x[4];
        x[0] = a[i][j];
        x[1] = a[i][m - j - 1];
        x[2] = a[n - i - 1][j];
        x[3] = a[n - i - 1][m - j - 1];
        sort(x, x + 4);

        c[i][j] =      x[2];
        c[i][m - j - 1] = c[i][j];
        c[n - i - 1][j] = c[i][j];
        c[n - i - 1][m - j - 1] = c[i][j];
      }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        ans += abs(a[i][j] - c[i][j]);
      }
    }
    cout << ans << endl;


  }



  return 0;

}


