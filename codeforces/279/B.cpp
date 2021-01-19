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

  long long int  n , t;
  cin >> n >> t;
  long long int  a[n + 1] {0}, p[n + 1] {0};
  for (long long int i = 1; i <= n; i++)
  {
    cin >> a[i];
    p[i] = p[i - 1] + a[i];
  }
  long long int  ans = INT_MIN;
  for (long long int  i = 1; i <= n; i++)
  {
    long long int  k = p[i - 1] + t;

    ll idx ;
    if (binary_search(p, p + n + 1, k) == true)
    {
      idx = lower_bound(p , p + n + 1, k) - p ;
      idx++;
    }
    else
      idx = lower_bound(p , p + n + 1, k) - p;

    ans = max(ans, idx - i);
    if (idx == n + 1)
      break;
  }
  cout << ans;





  return 0;

}