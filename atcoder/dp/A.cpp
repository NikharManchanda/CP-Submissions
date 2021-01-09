#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100002];
int dp[100002];
long long int fun(int x)
{
  if (dp[x] != -1)
  {
    return dp[x];
  }

  if (x >= n)
  {
    return dp[x] = 0;
  }



  if (x + 2 > n)
    return dp[x] = fun(x + 1) + abs(arr[x + 1] - arr[x]) ;
  return dp[x] = min(fun(x + 1) + abs(arr[x + 1] - arr[x]) , fun(x + 2) + abs(arr[x + 2] - arr[x]) );
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
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  memset(dp, -1, sizeof(dp));
  long long int ans = 0;
  cout << fun(1);



  return 0;
}