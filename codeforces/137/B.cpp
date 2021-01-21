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
  int a[n + 1] {0};
  for (int i = 0; i < n; i++)
  {
    int h;
    cin >> h;
    if (h <= n)
      a[h] = 1;
  }
  int c = 0;
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 1)
      c++;
  }
  cout << n - c;

  return 0;

}