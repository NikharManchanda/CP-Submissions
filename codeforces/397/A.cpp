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

  int n;
  cin >> n;
  int a[101] {0};
  int l, r;
  cin >> l >> r;
  for (int i = l ; i <= r - 1; i++)
  {
    a[i] = 1;
  }
  for (int i = 2; i <= n; i++)
  {
    cin >> l >> r;
    for (int i = l ; i <= r - 1; i++)
      a[i] = 0;
  }
  int ans = 0;
  for (int i = 0; i < 100; i++)
  {
    if (a[i] == 1)
      ans++;
  }
  cout << ans;




  return 0;

}