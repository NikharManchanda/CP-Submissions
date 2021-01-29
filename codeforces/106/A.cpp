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

  char c;
  cin >> c;
  char a, b, x, y;
  cin >> a >> b >> x >> y;
  map<char, int>mp;

  mp['6'] = 0;
  mp['7'] = 1;
  mp['8'] = 2;
  mp['9'] = 3;
  mp['T'] = 4;
  mp['J'] = 5;
  mp['Q'] = 6;
  mp['K'] = 7;
  mp['A'] = 8;
  if (b == c && y != c)
  {
    cout << "YES";
  }
  else
  {
    if (b == y && mp[a] > mp[x])
    {
      cout << "YES";
    }
    else
      cout << "NO";
  }





  return 0;

}