#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

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
  vi v;
  while (n > 0)
  {
    if (n % 4 == 0)
    {
      v.pb(4);
      n = n - 4;
    }
    else if (n >= 7 && n % 4 != 0)
    {
      v.push_back(7);
      n = n - 7;
    }
    else
    {
      cout << -1;
      return 0;
    }
  }
  vi l;
  for (int i = 0; i < v.size();)
  {
    if (v[i] == 4 && i + 6 < v.size())
    {
      l.pb(7777);
      i = i + 7;
    }
    else
    {
      l.pb(v[i]);
      i++;
    }
  }
  for (int i = l.size() - 1; i >= 0; i--)
  {
    cout << l[i];
  }



  return 0;

}