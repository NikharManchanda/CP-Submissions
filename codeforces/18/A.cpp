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
ll fun(int x1, int y1, int x2, int y2)
{
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
bool py(int x1, int y1, int x2, int y2, int x3, int y3)
{
  ll a, b, c;
  a = fun(x1, y1, x2, y2);
  b = fun(x2, y2, x3, y3);
  c = fun(x3, y3, x1, y1);
  if (c > b && c > a)
  {
    if (c == a + b)
      return 1;
  }
  else if (b > a && b > c)
  {
    if (b == a + c)
      return 1;
  }
  else if (a > c && a > b)
  {
    if (a == b + c)
      return 1;
  }
  return false;
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

  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  bool t = py(x1, y1, x2, y2, x3, y3);
  if (t == 1)
  {
    cout << "RIGHT";
    return 0;
  }
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};

  for (int j = 1; j <= 3; j++)
  {
    if (j == 1)
    {

      for (int i = 0; i < 4; i++)
      {
        int x = x1;
        int y = y1;
        x = x + dx[i];
        y = y + dy[i];
        if (py(x, y, x2, y2, x3, y3))
        {
          cout << "ALMOST";
          return 0;
        }
      }
    }
    else if (j == 2)
    {
      for (int i = 0; i < 4; i++)
      {
        int x = x2;
        int y = y2;
        x = x + dx[i];
        y = y + dy[i];
        if (py(x1, y1, x, y, x3, y3))
        {
          cout << "ALMOST";
          return 0;
        }
      }
    }
    else
    {
      for (int i = 0; i < 4; i++)
      {
        int x = x3;
        int y = y3;
        x = x + dx[i];
        y = y + dy[i];
        if (py(x, y, x2, y2, x, y))
        {
          cout << "ALMOST";
          return 0;
        }
      }
    }
  }
  cout << "NEITHER";




  return 0;

}