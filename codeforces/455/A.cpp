#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;

/* -----------------------     CODE BELOW    ------------------------------------*/
ll n;
ll a[100009];
ll dp[100009];
ll fun(ll idx)
{
  if (dp[idx] != -1)
  {
    return dp[idx];
  }
  if (idx >= n)
    return dp[idx] = 0;
  ll sum = a[idx];
  ll i;
  for (i = idx + 1; i < n; i++)
  {
    if (a[i] == a[idx])
    {
      sum += a[i];
    }
    else
      break;
  }
  if (i < n && a[i] == a[idx] + 1)
  { ll j;
    ll s = 0;
    for (j = i; i < n; j++)
    {
      if (a[j] == a[idx] + 1)
        s += a[j];
      else
        break;
    }
    return dp[idx] = max(fun(i), sum + fun(j));

  }
  else
    return dp[idx] = sum + fun(i);
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
  cin >> n;
  memset(dp, -1, sizeof(dp));
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  ll ans = fun(0);
  cout << ans;


  return 0;

}