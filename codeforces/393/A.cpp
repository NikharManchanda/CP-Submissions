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


  string str;
  cin >> str;
  int w = 0, e = 0, t = 0, n = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'i')
      w++;
    else if (str[i] == 'e')
      e++;
    else if (str[i] == 't')
      t++;
    else if (str[i] == 'n')
      n++;

  }
  int ans = 0;
  e = e / 3;
  ans = min(min(w, t), e);
  while (n < (ans * 2 + 1) && ans >= 0)
  {
    ans--;
  }
  cout << max(0, ans);




  return 0;

}