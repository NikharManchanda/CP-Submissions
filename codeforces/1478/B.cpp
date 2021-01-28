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

  int t;
  cin >> t;
  while (t--)
  {
    int q, d;
    cin >> q >> d;
    int a[q];
    int cmax = 0;
    for (int i = 0; i < q; i++)
    {
      cin >> a[i];
      if (cmax < a[i])
      {
        cmax = a[i];
      }
    }
    for (int i = 0; i < q; i++)
    {
      if (a[i] <= 10 * d - 1)
      {
        while (a[i] % d != 0 && a[i] > 0)
        {
          a[i] = a[i] - 10;
        }
        if (a[i] % d == 0 && a[i] > 0)
        {
          cout << "YES" << endl;
        }
        else
          cout << "NO" << endl;
      }
      else
      {
        cout << "YES" << endl;
      }
    }
  }




  return 0;

}