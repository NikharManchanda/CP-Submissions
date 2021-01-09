#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100002][4];
int dp[100002][4];
int fun(int x, int y)
{
  if (dp[x][y] != 0)
  {
    return dp[x][y];
  }
  if (x == n)
    return dp[x][y] = arr[x][y];

  int k;
  if (y == 1)
  {
    k = max(fun(x + 1, 2), fun(x + 1, 3));
  }
  else if (y == 2)
    k = max(fun(x + 1, 1), fun(x + 1, 3));
  else if (y == 3)
    k = max(fun(x + 1, 1), fun(x + 1, 2));
  return dp[x][y] = arr[x][y] + k;
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
    for (int j = 1; j <= 3; j++)
      cin >> arr[i][j];
  }
  cout << max(max(fun(1, 2), fun(1, 1)), fun(1, 3));




  return 0;
}