#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;

/* -----------------------     CODE BELOW    ------------------------------------*/
bool isPrime(int n)
{
  // Corner cases
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  // This is checked so that we can skip
  // middle five numbers in below loop
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}
int fun(int n)
{
  while (!isPrime(n))
    n++;
  return n;
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
  int q[100089] {0};
  for (int i = 1; i <= 100001; i++)
  {
    q[i] = fun(i);
  }
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
      a[i][j] = q[a[i][j]] - a[i][j];

    }

  }
  int sum = INT_MAX, s = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    int ans = 0;
    for (int j = 0; j < m; j++)
    {
      ans += a[i][j];

    }
    sum = min(sum, ans);
  }
  for (int i = 0; i < m; i++)
  {
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
      ans += a[j][i];

    }
    s = min(s, ans);
  }
  cout << min(s, sum);





  return 0;

}