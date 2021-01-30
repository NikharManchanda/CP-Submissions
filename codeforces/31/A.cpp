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
ll fun(long long int n)
{
  return ((n) * (n + 1)) / 2;
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


  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j != i)
      {
        for (int k = 0; k < n; k++)
        {
          if (k != j)
          {
            if (a[i] == (a[j] + a[k]) )
            {
              cout << i + 1 << " " << j + 1 << " " << k + 1;
              return 0;
            }
          }

        }
      }

    }
  }
  cout << -1;




  return 0;

}