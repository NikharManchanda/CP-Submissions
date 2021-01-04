#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  /*
  #ifndef ONLINE_JUDGE

    freopen("IP-A.txt", "r", stdin);
    freopen("OP-A.txt", "w", stdout);

  #endif
  */
  long long int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin >> n;
    long long int arr[n + 1];
    for (long long int i = 1; i <= n; i++)
      cin >> arr[i];
    long long int cmax = 0;
    long long int a[n + 1] { 0};
    for (int i = n; i >= 1; i--)
    {
      long long int k = 0;
      long long int j = i;
      while (j <= n)
      {
        if (a[j] == 0)
        {
          k = k + arr[j];
          j = j + arr[j];
        }
        else
        {
          k = k + a[j];
          break;
        }
      }
      a[i] = k;
      cmax = max(cmax, k);
    }
    cout << cmax << endl;
  }


  return 0;

}
