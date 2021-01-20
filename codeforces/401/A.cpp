#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
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

  ll n, x;
  cin >> n >> x;
  ll sum = 0;
  for (long long int i = 0; i < n; i++)
  {
    long long int h;
    cin >> h;
    sum += h;
  }

  sum = abs(sum);
  int c = 0;
  while (sum > x)
  {
    sum = sum - x;
    c++;
  }
  if (sum != 0)
  {
    c++;
  }
  cout << c;


  return 0;

}