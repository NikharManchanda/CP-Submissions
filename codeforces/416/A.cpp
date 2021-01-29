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

  long long int n;
  cin >> n;
  long long int cmin = -2000000001, cmax = 2000000001;
  for (long long int i = 0; i < n; i++)
  {
    string s;
    long long int a;
    char c;

    cin >> s >> a >> c;
    if (c == 'Y')
    {
      if (s == ">=")
      {
        if (a >= cmin)
          cmin = a;
      }
      else if (s == ">")
      {
        if ((a + 1 >= cmin))
          cmin = a + 1;
      }
      else if (s == "<")
      {
        if ((a - 1) <= cmax)
          cmax = a - 1;
      }
      else if (s == "<=")

      {
        if (a <= cmax)
          cmax = a;
      }
    }
    else
    {
      if (s == ">=")
      {
        if ((a - 1) <= cmax)
          cmax = a - 1;
      }
      else if (s == ">")
      {
        if (a <= cmax)
          cmax = a;
      }
      else if (s == "<")
      {
        if (a >= cmin)
          cmin = a;
      }
      else if (s == "<=")
      { if ((a + 1 >= cmin))
          cmin = a + 1;
      }
    }
  }

  if (cmin > cmax)
  {
    cout << "Impossible";
  }
  else
  {
    if (cmin != -2000000001 )
    {
      cout << cmin;
    }
    else if (cmax != 2000000001)
    {
      cout << cmax;
    }
    else
    {
      cout << "Impossible";
    }
  }





  return 0;

}