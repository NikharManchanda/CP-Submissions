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

    long long int  a, b, k;

    cin >> a >> b >> k;
    vii  v;
    long long int x[k], y[k];
    map<long long int, long long int> mp1, mp2;
    for (long long int i = 0; i < k; i++)
    {
      cin >> x[i];
    }
    for (long long int i = 0; i < k; i++)
    {
      cin >> y[i];
      mp1[y[i]]++;
    }
    for (long long int i = 0; i < k; i++)
    {
      v.pb(mp(x[i], y[i]));
    }
    sort(x, x + k);
    sort(v.begin(), v.end());
    long long int ans = 0;
    for (long long int i = 0; i < k; i++)
    {
      long long int n, m;
      n = v[i].first;
      m = v[i].second;
      mp2[m]++;
      ll it = upper_bound(x, x + k, n) - x;
      if (it != k)
      {
        long long int f = k - it;
        f = f - (mp1[m] - mp2[m]);
        ans += f;
      }

    }
    cout << ans << endl;



  }


  return 0;

}