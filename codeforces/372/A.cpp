#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef deque<int> di;
typedef deque<ii> dii;

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
  di v(n);
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = v.size() - 1; i >= 0; i--)
  {
    int k = v[i] * 2;
    auto it = lower_bound(v.begin(), v.end(), k);
    if (it != v.end())
    {
      v.pop_back();
      c++;
    }
  }
  int x = n / 2;
  if (n % 2 != 0)
    x++;
  cout << max(n - c, x);




  return 0;

}