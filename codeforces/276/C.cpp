#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;

/* -----------------------     CODE BELOW    ------------------------------------*/


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

  ll n, q;
  cin >> n >> q;
  ll b[n];
  ll a[n + 1] {0};
  ll p[n + 1] {0};
  for (ll i = 0; i < n; i++)
    cin >> b[i];

  for (ll i = 1; i <= q; i++)
  {
    ll l, r;
    cin >> l >> r;
    a[l]++;
    if (r + 1 <= n)
      a[r + 1]--;
  }
  for (ll i = 1; i <= n; i++)
  { p[i] = p[i - 1] + a[i];}
  sort(b, b + n, greater<ll> ());
  sort(p + 1, p + n + 1, greater<ll>());

  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    sum += (ll)(b[i] * p[i + 1]);
  }
  cout << sum;



  return 0;

}