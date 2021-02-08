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
  string str;
  cin >> str;
  int a = 0, b = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '7')
      b++;
    else if (str[i] == '4')
      a++;
  }
  if (a == 0 && b == 0)
  {
    cout << -1 << endl;
  }
  else
  {
    if (a >= b)
    {
      cout << 4;
    }
    else
    {
      cout << 7;
    }
  }





  return 0;

}


