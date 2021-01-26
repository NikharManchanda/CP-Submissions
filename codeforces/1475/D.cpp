#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lim 300005
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef deque<ll> di;
typedef deque<ii> dii;
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

  ll k;
  cin >> k;
  while (k--)
  {

    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vi o, t, p, pre;
    for (ll i = 0; i < n; i++)
    {
      ll h;
      cin >> h;
      if (h == 1)
      {
        o.pb(a[i]);
      }
      else
        t.pb(a[i]);
    }
    sort(o.begin(), o.end(), greater<ll>());
    sort(t.begin(), t.end(), greater<ll>());
    for (ll i = 0; i < o.size(); i++)
    {
      if (i == 0)
      {
        p.pb(o[i]);
      }
      else
      {
        p.pb(p[i - 1] + o[i]);
      }

    }
    for (ll i = 0; i < t.size(); i++)
    {
      if (i == 0)
      {
        pre.pb(t[i]);
      }
      else
      {
        pre.pb(pre[i - 1] + t[i]);
      }

    }
    if (p.size() == 0 && pre.size() == 0)
    {
      cout << -1 << endl;
      continue;
    }
    else if (p.size() == 0)
    {
      ll it = lower_bound(pre.begin(), pre.end(), m) - pre.begin();
      if (it == pre.size())
      {
        cout << -1 << endl;
        continue;
      }
      else
      {
        cout << 2 * (it + 1) << endl;
        continue;
      }
    }
    else if (pre.size() == 0)
    {
      ll it = lower_bound(p.begin(), p.end(), m) - p.begin();
      if (it == p.size())
      {
        cout << -1 << endl;
        continue;
      }
      else
      {
        cout << (it + 1) << endl;
        continue;
      }
    }
    else
    {
      ll ans = INT_MAX;
      for (ll i = 0; i < pre.size(); i++)
      {
        ll x = m - pre[i];
        if (x <= 0)
        { ans = min(ans, 2 * (i + 1));
          break;
        }
        ll it = lower_bound(p.begin(), p.end(), x) - p.begin();
        if (it != p.size())
        {
          it = it + 1;
          ll s = it + 2 * (i + 1);
          ans = min(ans, s);
        }

      }
      for (ll i = 0; i < p.size(); i++)
      {
        ll x = m - p[i];
        if (x <= 0)
        { ans = min(ans, i + 1);
          break;
        }
        ll it = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        if (it != pre.size())
        {
          it = it + 1;
          ll s = 2 * (it) + i + 1;
          ans = min(ans, s);
        }

      }
      if (ans != INT_MAX)
        cout << ans << endl;
      else
        cout << -1 << endl;
    }

  }



  return 0;

}