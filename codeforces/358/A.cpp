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
  int n;
  cin >> n;
  int a[n];
  vector<pair<int, int> > v;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    v.pb(mp(a[i], a[i + 1]));
  }
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {

      {
        int a, b, c, d;
        a = min(v[i].first, v[i].second);
        b = max(v[i].first, v[i].second);
        c = min(v[j].first, v[j].second);
        d = max(v[j].first, v[j].second);
        if ((a < c && c < b && b < d) || (c < a && a < d && d < b ))
        {

          cout << "yes";
          return 0;
        }
      }
    }
  }
  cout << "no";


  return 0;

}