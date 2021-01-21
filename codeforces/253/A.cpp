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


  
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

 


  int b, g;
  cin >> b >> g;
  if (b == g)
  {
    for (int i = 1; i <= b + g; i++)
    {
      if (i % 2)
      {
        cout << "G";
      }
      else
        cout << "B";
    }
  }
  else if (b > g)
  {
    for (int i = 1; i <= b - g; i++)
    {
      cout << "B";
    }
    for (int i = 1; i <= 2 * g; i++)
    {
      if (i % 2 != 0)
        cout << "G";
      else
        cout << "B";
    }
  }
  else
  {
    for (int i = 1; i <= g - b; i++)
    {
      cout << "G";
    }
    for (int i = 1; i <= 2 * b; i++)
    {
      if (i % 2 != 0)
        cout << "B";
      else
        cout << "G";
    }
  }

  return 0;

}