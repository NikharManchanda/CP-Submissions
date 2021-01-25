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

  long long int t;
  cin >> t;

  while (t--)
  {

    long long int n;
    cin >> n;
    ll y = n % 2020;
    ll x = n - 2021 * y;
    if (x < 0)
    {
      cout << "NO" << endl;
      continue;
    }
    if (x % 2020 != 0)
    {
      cout << "NO" << endl;
    }
    else
      cout << "YES" << endl;
  }


  return 0;

}