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



 

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  


  int n;
  cin >> n;
  int a[3] {0};
  a[n - 1] = 1;
  int t = 3;
  while (t--)
  {
    int x, v;
    cin >> x >> v;
    swap(a[x - 1], a[v - 1]);
  }
  for (int i = 0; i < 3; i++)
  {
    if (a[i] == 1)
    {
      cout << i + 1;
      return 0;
    }
  }




  return 0;

}