#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n;
  cin >> n;

  long long int arr[n + 1];
  long long int a[n + 1];
  for (long long int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    a[i] = arr[i];
  }
  sort(a + 1, a + n + 1);
  long long int pre[n + 1];
  long long int p[n + 1];
  pre[0] = 0;
  p[0] = 0;
  for (long long int i = 1; i <= n; i++)
  {
    pre[i] = arr[i] + pre[i - 1];
    p[i] = p[i - 1] + a[i];
  }
  long long int m;
  cin >> m;
  while (m--)
  {
    long long int x, y, z;
    cin >> x >> y >> z;
    if (x == 1)
    {
      cout << pre[z] - pre[y - 1] << endl;
    }
    else if (x == 2)
    {
      cout << p[z] - p[y - 1] << endl;
    }
  }




  return 0;

}
