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


  long long int n;
  cin >> n;
  for (long long int i = 1; i <= sqrt(2 * n); i++)
  {
    ll ans = n - fun(i);
    ans = ans * 2;
    int s = 1, e = sqrt(ans + 1);
    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (mid * (mid + 1) == ans)
      {
        cout << "YES";
        return 0;
      }
      else if (mid * (mid + 1) > ans)
      {
        e = mid - 1;
      }
      else
        s = mid + 1;
    }
  }
  cout << "NO";




  return 0;

}