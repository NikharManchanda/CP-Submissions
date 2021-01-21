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

  int n, d;
  cin >> n >> d;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  long long int c = 0;
  for (int i = 0; i <= n - 3; i++)
  {

    ll it = upper_bound(a, a + n, a[i] + d) - a;
    it--;
    ll x = it - i;
    x = ((x) * (x - 1)) / 2;
    c += x;
  }
  cout << c;

  return 0;

}