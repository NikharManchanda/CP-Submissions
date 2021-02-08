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
bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second == p2.second)
  {
    return p1.first > p2.first;
  }
  return p1.second > p2.second;

}
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
  int n;
  cin >> n;
  vii v;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    v.pb(mp(x, y));
  }
  sort(v.begin(), v.end(), comp);
  int c = 1;
  int s = 0;
  for (int i = 0; i < n; i++)
  {
    if (c == 0)
    {
      break;
    }
    s += v[i].first;
    c = c - 1 + v[i].second;
  }
  cout << s;




  return 0;

}


