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
  int a[n + 1];
  ll c = 0, ans = 0;
  for (int i = 1; i < n + 1; i++)
  {
    cin >> a[i];
  }
  a[0] = a[1];
  ans += a[1];
  for (int i = 1; i < n; i++)
  {
    int e = a[i] - a[i + 1];
    c = c + e;
    if (c < 0)
    {
      ans += abs(c);
      c = 0;
    }
  }
  cout << ans;


  return 0;

}