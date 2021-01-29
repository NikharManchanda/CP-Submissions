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

  int n, m;
  cin >> n >> m;
  int a[n];
  int b[m];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + m);
  if (b[0] <= a[n - 1])
  {
    cout << -1;
    return 0;
  }
  int f = 0;
  for (int i = a[n - 1]; i < b[0]; i++)
  {
    if (2 * a[0] <= i)
    {
      cout << i;
      return 0;
    }

  }
  cout << -1;






  return 0;

}