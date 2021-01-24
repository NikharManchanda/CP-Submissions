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

  double m, n;
  cin >> m >> n;
  double ans = 0;
  for (int i = 1; i <= m; i++)
  {
    double s = powl(i / m, n) - powl((i - 1) / m, n);

    s = s * i;
    ans += s;
  }

  cout << fixed << setprecision(12) << ans;


  return 0;

}