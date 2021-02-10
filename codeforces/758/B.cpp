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


/*------------------------------------------------------------------*/


long long int C(long long int n, long long  int k)
{
  long long int res = 1;

  // Since C(n, k) = C(n, n-k)
  if (k > n - k)
    k = n - k;

  // Calculate value of
  // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
  for (long long int i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
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

  map<char, int> mp;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'G')
    {
      mp['G'] = i % 4;

    }
    else if (str[i] == 'R')
    {
      mp['R'] = i % 4;

    }
    else if (str[i] == 'Y')
    {
      mp['Y'] = i % 4;
    }
    else if (str[i] == 'B')
    {
      mp['B'] = i % 4;
    }
  }


  int g = 0, y = 0, b = 0, r = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '!')
    {
      if (mp['G'] == i % 4)
        g++;
      else if (mp['B'] == i % 4)
        b++;
      else if (mp['R'] == i % 4)
        r++;
      else
        y++;

    }

  }
  cout << r << " " << b << " " << y << " " << g;






  return 0;

}


