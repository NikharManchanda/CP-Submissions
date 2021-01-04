#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n;
  cin >> n;
  long long int h[n + 1];
  h[0] = 0;
  for (long long int i = 1; i <= n; i++)
  {
    cin >> h[i];
  }
  long long int m;
  cin >> m;
  long long int hmax = 0, idx = 1;
  while (m--)
  {
    long long int w, a;
    cin >> w >> a;
    if (w < idx)
    {
      cout << hmax << endl;
      hmax = hmax + a;
      idx = w;
    }
    else
    {
      for (long long int i = idx; i <= w; i++)
        hmax = max(hmax, h[i]);
      cout << hmax << endl;
      hmax = hmax + a;
      idx = w;
    }

  }


  return 0;

}
