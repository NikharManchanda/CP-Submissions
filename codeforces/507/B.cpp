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
ll fun(long long int n)
{
  return ((n) * (n + 1)) / 2;
}
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


  long long int r, x, y, a, b;
  cin >> r >> x >> y >> a >> b;
  double s = (x - a) * (x - a) + (y - b) * (y - b);
  long long int w = sqrt(s);
  if (sqrt(s)*sqrt(s) != s)
  {
    w++;
  }
  long long int ans;
  if (w % (2 * r) == 0)
    ans = w / (2 * r);
  else
    ans = w / (2 * r) + 1;
  cout << ans << endl;




  return 0;

}