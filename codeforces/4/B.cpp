#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define lim 100006
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef deque<ll> di;
typedef deque<ii> dii;
long long mod = 1000000007;
const double pi = acos(-1.0);
/*------------------------------------------------------------------*/

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);



  /*
  #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  #endif
  */

  int n, s;
  cin >> n >> s;
  int sum = 0, d = 0;
  vii v;
  for (int i = 1; i <= n; i++)
  {
    int x, y;
    cin >> x >> y;
    sum += x;
    d += y;
    v.pb(mp(x, y));
  }
  if (d < s || sum > s)
  {
    cout << "NO";
    return 0;
  }
  else
  {
    int x[n];
    for (int i = 0; i < n; i++)
    {
      x[i] = v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
      int a = v[i].first;
      int b = v[i].second;
      if (b - a + sum <= s)
      {
        sum += b - a;
        x[i] = b;
      }
      else
      {

        x[i] += s - sum;
        break;
      }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
      cout << x[i] << " ";
    }
  }




  return 0;

}


