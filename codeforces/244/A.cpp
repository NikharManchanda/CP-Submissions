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

  int n, k;
  cin >> n >> k;
  int h = n * k;
  bool vis[h + 1] {0};
  vector<int> v[k + 1];
  for (int i = 1; i <= k; i++)
  {
    int l;
    cin >> l;
    v[i].pb(l);
    vis[l] = true;
  }
  int s = 1;
  for (int i = 1; i <= k; i++)
  {
    for (int j = s; j <= h; j++)
    {
      if (v[i].size() == n)
      {s = j; break;}
      if (!vis[j])
      {
        v[i].pb(j);
        vis[j] = true;
      }
    }
  }
  for (int i = 1; i <= k; i++)
  {
    for (auto x : v[i])
    {
      cout << x << " ";
    }
    cout << endl;
  }



  return 0;

}