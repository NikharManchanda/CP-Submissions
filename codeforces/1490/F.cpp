#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
//#define mp make_pair
#define pb push_back
#define lim 100006
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

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      mp[a[i]]++;
    }
    vi v;
    for (auto x : mp)
    {
      v.pb(x.second);
    }
    sort(all(v));
    int ans = INT_MAX;

    int k = v.size();
    int s[v.size() + 1] {0};
    int p[k + 1] {0};
    for (int i = 1; i <= k; i++)
      p[i] = p[i - 1] + v[i - 1];
    for (int i = k - 1; i >= 0; i--)
    {
      s[i] = s[i + 1] + v[i];

    }



    for (int i = 0; i < k; i++)
    {

      auto it = lower_bound(all(v), v[i]) - v.begin();

      int cmin = s[i + 1] - v[i] * (k - i - 1);
      cmin += p[i];
      ans = min(ans, cmin);
    }
    cout << ans << endl;


  }












  return 0;


}