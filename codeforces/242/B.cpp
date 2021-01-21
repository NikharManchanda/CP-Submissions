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
  int a[n], b[n];

  for (int i = 0; i < n; i++)
  {cin >> a[i] >> b[i];}
  int cmin = INT_MAX, cmax = INT_MIN;
  vector<int> idx1;
  for (int i = 0; i < n; i++)
  {
    if (cmin >= a[i])
    {
      cmin = a[i];
    }
    if (cmax <= b[i])
    {
      cmax = b[i];
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (cmin == a[i])
    {
      idx1.pb(i);
    }

  }

  for (auto x : idx1)
  {
    if (b[x] == cmax)
    {
      cout << x + 1;
      return 0;
    }
  }
  cout << -1;

  return 0;

}