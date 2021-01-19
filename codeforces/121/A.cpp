#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;

/* -----------------------     CODE BELOW    ------------------------------------*/


ll fun(ll n)
{ ll y = n;
  ll l = log10(n) + 1;
  ll a[l], b[l];
  for (ll i = 0; i < l; i++)
  {
    b[i] = n % 10;
    n = n / 10;
  }
  for (ll i = 0; i < l; i++)
  {
    a[i] = b[l - 1 - i];
  }
  ll f = 0, s = 0;
  ll i;
  for (i = 0; i < l; i++)
  {
    if (a[i] == 4)
    {
      f++;
    }
    else if (a[i] == 7)
    {
      s++;
    }
    else if (a[i] < 4)
    {
      for (ll j = i; j < l; j++)
      {
        a[j] = 4;
      }
      ll ans = 0;
      for (ll j = 0; j < l; j++)
        ans = ans * 10 + a[j];
      return ans;

    }
    else if (a[i] > 4 && a[i] < 7)
    {
      a[i] = 7;
      for (ll j = i + 1; j < l; j++)
      {
        a[j] = 4;
      }
      ll ans = 0;
      for (ll j = 0; j < l; j++)
        ans = ans * 10 + a[j];
      return ans;
    }
    else if (a[i] > 7)
    {
      if (s == i)
      {
        ll ans = 0;
        for (ll j = 0; j <= l; j++)
          ans = ans * 10 + 4;
        return ans;
      }
      else
      {
        ll k;
        for (ll j = i - 1; j >= 0; j--)
        {
          if (a[j] == 4)
          {
            a[j] = 7;
            k = j + 1;
            break;
          }
        }
        for (ll j = k; j < l; j++)
        {
          a[j] = 4;
        }
        ll ans = 0;
        for (ll j = 0; j < l; j++)
          ans = ans * 10 + a[j];
        return ans;

      }
    }
  }
  return y;
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

  ll l, r;
  cin >> l >> r ;

  ll sum = 0;
  ll x = fun(l);
  for (ll i = l; i <= r; i++)
  {
    if (i <= x)
      sum += x;
    else
    {
      x = fun(i);
      sum += fun(i);
    }
  }
  cout << sum << endl;






  return 0;

}