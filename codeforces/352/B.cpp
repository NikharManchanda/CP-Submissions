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
  vii a;
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x ;
    m[x]++;
    a.pb(mp(x, i + 1 ));
  }
  sort(a.begin(), a.end());
  vii ans;

  for (int i = 0; i < n; i++)
  {
    if (m[a[i].first] == 1)
    {
      ans.pb(mp(a[i].first, 0));

    }
    else
    {
      vi v;
      while (a[i].first == a[i + 1].first && i < n - 1)
      {
        v.pb(a[i + 1].second - a[i].second);
        i++;
      }

      bool ok = 1;
      int d = v[0];
      for (int j = 0; j < v.size() - 1; j++)
      {
        if (v[j + 1] != v[j] )
        {
          ok = 0;
          break;
        }
      }
      if (ok)
      {
        ans.pb(mp(a[i].first, d));
      }
    }
  }
  cout << ans.size() << endl;

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i].first << " " << ans[i].second << endl;
  }




  return 0;

}


