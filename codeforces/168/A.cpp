#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, y;
  cin >> n >> x >> y;
  int s = n * y;
  if (s % 100 != 0)
  {
    s = s / 100;
    s++;
  }
  else
    s = s / 100;
  s = s - x;
  if (s > 0)
    cout << s;
  else
    cout << 0;



  return 0;

}