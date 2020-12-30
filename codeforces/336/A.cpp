#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;
  cin >> x >> y;
  int t = abs(x) + abs(y);
  if (x > 0 && y > 0)
    cout << 0 << " " << t << " " << t << " " << 0;
  else if (x < 0 && y > 0)
    cout << -t << " " << 0 << " " << 0 << " " << t ;
  else if (x < 0 && y < 0)
    cout << -t << " " << 0 << " " << 0 << " " << -t;
  else
    cout << 0 << " " << -t << " " << t << " " << 0;

  return 0;

}