#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  set<pair<int, int> > s;
  int cmax = 1, ans = 1;
  int c, d;
  cin >> c >> d;
  for (int i = 1; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    if (a == c && b == d)
    {  ans++;}
    else {ans = 1;}
    cmax = max(ans, cmax);
    c = a, d = b;

  }
  cmax = max(cmax, ans);
  cout << cmax;

  return 0;

}
