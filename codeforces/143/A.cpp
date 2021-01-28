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
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  int e = r1 - r2 + c1 - c2 + 2 * d1;
  e = e / 4;
  if (e < 1 || e > 9)
  {
    cout << -1;
    return 0;
  }
  int f = r1 - e;
  int h = d1 - e;
  int g = c1 - e;
  if (f < 1 || f > 9)
  {
    cout << -1;
    return 0;
  } if (h < 1 || h > 9)
  {
    cout << -1;
    return 0;
  } if (g < 1 || g > 9)
  {
    cout << -1;
    return 0;
  }
  set<int> s;
  s.insert(e);
  s.insert(f); s.insert(g); s.insert(h);
  if (s.size() == 4)
    cout << e << " " << f << endl << g << " " << h;
  else
    cout << -1 << endl;





  return 0;

}