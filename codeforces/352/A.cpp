#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a = 0;
  int c = 0;
  for (int i = 0; i < n; i++)
  { int k;
    cin >> k;
    if (k == 5)
      c++;
    else
      a++;
  }
  c = c / 9;
  int f = 0;
  if (a >= 1)
  {
    for (int i = 1; i <= c; i++)
    {
      f = 1;
      cout << "555555555";
    }
    if (f == 1)
    {
      for (int i = 1; i <= a; i++)
        cout << 0;
    }
    else
      cout << 0;
  }
  else
    cout << -1;


  return 0;

}