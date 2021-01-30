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
bool issorted(long long int a[], long long  int n)
{
  for (long long int i = 0; i < n - 1; i++)
  {
    if (a[i + 1] < a[i])
      return false;
  }
  return true;
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


  long long int n;
  cin >> n;
  long long int a[n];
  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  long long int j = -1;
  for (long long int i = 1; i < n; i++)
  {
    if (a[i] < a[i - 1])
    {
      if (j == -1)
      {
        j = i;
      }
      else
      {
        cout << -1;
        return 0;
      }
    }
  }
  if (j == -1)
  {
    cout << 0;
    return 0;
  }
  if (a[n - 1] <= a[0])
  {
    cout << n - j;
    return 0;
  }
  cout << -1;
  return 0;

}