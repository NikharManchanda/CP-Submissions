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
  long long int n, q;
  cin >> n >> q;
  long long int arr[n + 1];
  for (long long int i = 1; i < n + 1; i++)
  {
    cin >> arr[i];
  }
  long long int a[n + 1] {0};
  long long int h = 0;
  for (long long int i = 1; i <= q; i++)
  {
    long long int p;
    cin >> p;
    if (p == 1)
    {
      long long int k, l;
      cin >> k >> l;
      arr[k] = l;
      a[k] = h;
    }
    else if (p == 2)
    {
      long long int g;
      cin >> g;
      h += g;
    }
    else if (p == 3)
    {
      long long int k;
      cin >> k;
      cout << h + arr[k] - a[k] << endl;
    }
  }

  return 0;

}
