#include <bits/stdc++.h>
using namespace std;
int n;
int k;
int arr[100002];
int dp[100002];
int fun(int x)
{
  if (dp[x] != -1)
  {
    return dp[x];
  }

  if (x >= n)
  {
    return dp[x] = 0;
  }
  int cmin = INT_MAX;
  for (int i = 1; i <= k; i++)
  {
    if (x + i <= n)
      cmin = min(cmin, (fun(x + i) + abs(arr[x] - arr[x + i])));
    else
      break;
  }
  return dp[x] = cmin;


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
  cin >> n >> k;

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  memset(dp, -1, sizeof(dp));

  cout << fun(1);



  return 0;
}