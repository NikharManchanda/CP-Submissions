#include <bits/stdc++.h>
using namespace std;
int n;
int W;
int w[101];
int v[101];
long long int dp[101][100001];
long long int fun(int x, int W)
{
  if (dp[x][W] != 0)
    return dp[x][W];
  if (x <= 0)
    return 0;

  if (w[x] > W)
  {
    return dp[x][W] = fun(x - 1, W);
  }
  else
  {
    return dp[x][W] = max(fun(x - 1, W), v[x] + fun(x - 1, W - w[x]));
  }

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /*
   #ifndef ONLINE_JUDGE

      freopen("Ip-A.txt","r",stdin);
      freopen("Op-A.txt","w",stdout);

   #endif
  */
  cin >> n >> W;
  for (int i = 1; i <= n; i++)
  {
    cin >> w[i] >> v[i];
  }
  cout << fun(n, W);





  return 0;
}