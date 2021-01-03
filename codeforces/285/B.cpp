#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s, t;
  cin >> n >> s >> t;
  int c = 0;
  int arr[n + 1];
  arr[0] = 0;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  int k = 0;
  while (s != t && k <= n)
  {
    k++;
    s = arr[s];
    c++;
    if (s == t)
      break;
  }
  if (c > n)
    cout << -1;
  else
    cout << c;

  return 0;

}
