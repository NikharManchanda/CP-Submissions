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
  int c = 0, f = 0;
  for (int i = 1; i <= n; i++)
  {
    int h; cin >> h;

    if (h == 25)
      c++;
    else if (h == 50)
    {
      if (c < 1)
      {
        cout << "NO";
        return 0;
      }
      f++;
      c--;
    }
    else if (h == 100)
    {
      if (f >= 1)
      {
        if (c < 1)
        {
          cout << "NO";
          return 0;
        }
        else
        {
          f--;
          c = c - 1;
        }
      }
      else
      {
        if (c < 3)
        {
          cout << "NO";
          return 0;
        }
        c = c - 3;
      }
    }
  }
  cout << "YES";

  return 0;

}