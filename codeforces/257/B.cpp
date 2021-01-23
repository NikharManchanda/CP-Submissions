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

  int n, m;
  cin >> n >> m;
  int t = n + m;
  int x = n, y = m;
  vector<int> a(n + m), b(n + m);
  a[0] = 1;
  b[0] = 0;
  n--;
  y--;
  for (int i = 1; i < t; i++)
  {
    if (i % 2 != 0)
    {
      if (a[i - 1] == 1  )
      {
        if (m > 0)
        {
          a[i] = 0;
          m--;
        }
        else
        {
          a[i] = 1;
          n--;
        }
      }
      else
      {
        if (n > 0)
        {
          a[i] = 1;
          n--;
        }
        else
        {
          a[i] = 0;
          m--;
        }
      }

    }
    else
    {
      if (a[i - 1] == 1  )
      {
        if (n > 0)
        {
          a[i] = 1;
          n--;
        }
        else
        {
          a[i] = 0;
          m--;
        }
      }
      else
      {
        if (m > 0)
        {
          a[i] = 0;
          m--;
        }
        else
        {
          a[i] = 1;
          n--;
        }
      }
    }
  }
  for (int i = 1; i < t; i++)
  {
    if (i % 2 != 0)
    {
      if (b[i - 1] == 1  )
      {
        if (y > 0)
        {
          b[i] = 0;
          y--;
        }
        else
        {
          b[i] = 1;
          x--;
        }
      }
      else
      {
        if (x > 0)
        {
          b[i] = 1;
          x--;
        }
        else
        {
          b[i] = 0;
          y--;
        }
      }

    }
    else
    {
      if (b[i - 1] == 1  )
      {
        if (x > 0)
        {
          b[i] = 1;
          x--;
        }
        else
        {
          b[i] = 0;
          y--;
        }
      }
      else
      {
        if (y > 0)
        {
          b[i] = 0;
          y--;
        }
        else
        {
          b[i] = 1;
          x--;
        }
      }
    }
  }
  x = 0;
  y = 0;
  int c = 0;
  int d = 0;
  for (int i = 1; i < t; i++)
  {
    if (a[i - 1] == a[i])
      x++;
    else
      y++;
  }
  for (int i = 1; i < t; i++)
  {
    if (b[i - 1] == b[i])
      c++;
    else
      d++;
  }
  if (c > x)
  {
    cout << c << " " << d;
  }
  else
    cout << x << " " << y;

  return 0;

}