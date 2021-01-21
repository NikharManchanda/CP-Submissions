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

  int x, y, a, b;
  cin >> x >> y >> a >> b;
  int n = x + y;
  vector<pair<int, int> > v;
  for (int i = a; i <= n - b && i <= x ; i++)
  {
    for (int j = b; j <= y && j < i; j++)
    {
      v.push_back(mp(i, j));
    }
  }
  cout << v.size() << endl;
  for (auto x : v)
  {
    cout << x.first << " " << x.second << endl;
  }



  return 0;

}