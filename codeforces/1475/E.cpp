#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef deque<int> di;
typedef deque<ii> dii;

/* -----------------------     CODE BELOW    ------------------------------------*/
long long int C(long long int n, long long  int r, long long  int p)
{
  // Optimization for the cases when r is large
  if (r > n - r)
    r = n - r;

  // The array C is going to store last row of
  // pascal triangle at the end. And last entry
  // of last row is nCr
  long long int C[r + 1];
  memset(C, 0, sizeof(C));

  C[0] = 1; // Top row of Pascal Triangle

  // One by constructs remaining rows of Pascal
  // Triangle from top to bottom
  for (long long int i = 1; i <= n; i++) {

    // Fill entries of current row using previous
    // row values
    for (long long int j = min(i, r); j > 0; j--)

      // nCj = (n-1)Cj + (n-1)C(j-1);
      C[j] = (C[j] + C[j - 1]) % p;
  }
  return C[r];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  /*
  #ifndef ONLINE_JUDGE

    freopen("Ip-A.txt", "r", stdin);
    freopen("Op-A.txt", "w", stdout);

  #endif
  */

  long long int t;
  cin >> t;

  while (t--)
  {

    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    ll x = a[k - 1];
    ll it1 = lower_bound(a, a + n, x, greater<int>()) - a;
    ll it2 = upper_bound(a, a + n, x, greater<int>()) - a;
    ll fre = it2 - it1;
    ll d = k - it1;

    ll ans = C(fre, d, mod);

    ans = ans % mod;
    if (ans < 0)
    {
      ans += mod;
    }
    ans = ans % mod;
    cout << ans << endl;


  }


  return 0;

}