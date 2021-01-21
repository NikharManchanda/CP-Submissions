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


  string s;
  cin >> s;
  int w = 0, b = 0;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'B')
      b++;
    else
      w++;
  }
  if (n % 2 == 0)
  {
    if (b != w)
    {
      cout << "NO";
      return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == s[i + 1])
      {
        cout << "NO";
        return 0;
      }
    }
  }
  else
  {
    if ((w - b) != 1)
    {
      cout << "NO";
      return 0;
    }

    int g = 0;
    for (int i = 0; i < n - 1; i++)
    {
      if (g >= 2)
      {
        cout << "NO";
        return 0;
      }
      if (s[i] == s[i + 1])
        g++;
    }
  }

  int t = 7;
  while (t--)
  { string str;
    cin >> str;
    int w = 0, b = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
      if (str[i] == 'B')
        b++;
      else
        w++;
    }
    if (n % 2 == 0)
    {
      if (b != w)
      {
        cout << "NO";
        return 0;
      }
      for (int i = 0; i < n - 1; i++)
      {
        if (str[i] == str[i + 1])
        {
          cout << "NO";
          return 0;
        }
      }
    }
    else
    {
      if (abs(w - b) != 1)
      {
        cout << "NO";
        return 0;
      }

      int g = 0;
      for (int i = 0; i < n - 1; i++)
      {
        if (g >= 2)
        {
          cout << "NO";
          return 0;
        }
        if (str[i] == str[i + 1])
          g++;
      }
    }
  }

  cout << "YES";

  return 0;

}