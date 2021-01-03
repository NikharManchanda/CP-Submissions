#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  int c = 0;
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++)
  {
    if (x == a && y == b)
    {
      cout << c;
      return 0;
    }
    if (str[i] == 'E' && x < a)
      x++;
    else if (str[i] == 'W' && x > a)
      x--;
    else if (str[i] == 'N' && y < b)
      y++;
    else if (str[i] == 'S' && y > b)
      y--;
    c++;
  }

  if (x == a && y == b)
  {
    cout << c;
    return 0;
  }
  else
    cout << -1;

  return 0;

}
