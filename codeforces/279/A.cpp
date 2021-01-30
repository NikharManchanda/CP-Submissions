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


  int x, y;
  cin >> x >> y;
  if (x == 0)
  {
    if (y == 0)
    {
      cout << 0;
    }
    else if (y < 0)
    {
      cout << 4 * abs(y);
    }
    else
    {
      cout << 4 * abs(y) - 2;
    }
  }
  else if (x > 0)
  {
    if (y == 1 - x)
    {
      cout << 4 * (abs(x) - 1);
    }
    else if ((y) > 1 - x && y <= x)
    {
      cout << 1 + 4 * (abs(x) - 1);
    }
    else if (y > 0)
    {
      cout << 1 + 4 * (abs(x) - 1) + 1 + 4 * (y - x);
    }
    else if (y < 0)
    {
      cout << 1 + 4 * (abs(x) - 1) - 1 + 4 * (abs(y) - x + 1);
    }
  }
  else
  {
    if (y == abs(x))
    {
      cout << 4 * abs(x) - 2;
    }
    else if (y >= -abs(x) && y < abs(x))
    {
      cout << 4 * abs(x) - 1;
    }
    else if (y > 0)
    {
      cout << 4 * abs(x) - 2 + 4 * (y - abs(x));
    }
    else if (y < 0)
    {
      cout << 4 * abs(x) + 4 * (abs(y) - abs(x));
    }
  }




  return 0;

}