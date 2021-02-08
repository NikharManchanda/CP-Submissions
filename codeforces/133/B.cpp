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

long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
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

  string str;
  cin >> str;
  vi v;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '>')
    {
      v.pb(1);
      v.pb(0); v.pb(0); v.pb(0);
    }
    else if (str[i] == '<')
    {
      v.pb(1);
      v.pb(0); v.pb(0); v.pb(1);
    }

    else if (str[i] == '+') {
      v.pb(1);
      v.pb(0); v.pb(1); v.pb(0);
    }
    else if (str[i] == '-') {
      v.pb(1);
      v.pb(0); v.pb(1); v.pb(1);
    }
    else if (str[i] == '.') {
      v.pb(1);
      v.pb(1); v.pb(0); v.pb(0);
    }
    else if (str[i] == ',') {
      v.pb(1);
      v.pb(1); v.pb(0); v.pb(1);
    }
    else if (str[i] == '[') {
      v.pb(1);
      v.pb(1); v.pb(1); v.pb(0);
    }
    else if (str[i] == ']') {
      v.pb(1);
      v.pb(1); v.pb(1); v.pb(1);
    }

  }
  ll ans = 0;
  for (int i = v.size() - 1, j = 0; i >= 0; i--)
  {

    ans = (ans + (binpow(2, j, 1000003 ) * v[i]) % 1000003) % 1000003;
    j++;
  }
  cout << ans % 1000003 ;




  return 0;

}


