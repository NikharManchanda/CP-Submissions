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
  int oo2 = 0, oo1 = 0;
  int o1 = 0, o2 = 0, e1 = 0, e2 = 0;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    if (x % 2 == 0)
      e1++;
    else
    {o1++;}
    if (y % 2 == 0)
      e2++;
    else
    {o2++;}
    if (x % 2 != y % 2)
      oo1++;
  }
  if (o1 % 2 != o2 % 2)
  {
    cout << "-1";
    return 0;
  }
  else
  {
    if (o1 % 2 == 0)
      cout << 0;
    else
    {
      if (oo1 == 0)
      {
        cout << -1;
      }
      else
        cout << 1;
    }
  }



  return 0;

}