#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;



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
  map<int, int> mp;
  for (int i = 1; i <= m; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int k;
    if (mp[a] != 0 )
    {
      k = 6 - mp[a];
      if (k == 5)
      {
        mp[b] = 2;
        mp[c] = 3;
      }
      else if (k == 4)
      {
        mp[b] = 1;
        mp[c] = 3;
      }
      else
      {
        mp[b] = 1;
        mp[c] = 2;
      }
    }
    else if (mp[b] != 0)
    {
      k = 6 - mp[b];
      if (k == 5)
      {
        mp[a] = 2;
        mp[c] = 3;
      }
      else if (k == 4)
      {
        mp[a] = 1;
        mp[c] = 3;
      }
      else
      {
        mp[a] = 1;
        mp[c] = 2;
      }
    }
    else if (mp[c] != 0)
    {
      k = 6 - mp[c];
      if (k == 5)
      {
        mp[b] = 2;
        mp[a] = 3;
      }
      else if (k == 4)
      {
        mp[b] = 1;
        mp[a] = 3;
      }
      else
      {
        mp[b] = 1;
        mp[a] = 2;
      }
    }
    else
    {
      mp[a] = 1;
      mp[b] = 2;
      mp[c] = 3;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << mp[i] << " ";
  }

  return 0;

}