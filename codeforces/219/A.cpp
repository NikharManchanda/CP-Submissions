#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  string str;
  cin >> str;
  set<char> s;
  map<char, int> mp;
  for (int i = 0; i < str.length(); i++)
  {
    mp[str[i]]++;
    s.insert(str[i]);
  }
  for (auto x : mp)
  {
    if (x.second % n != 0)
    {cout << -1; return 0;}
  }
  int k = n;
  for (int i = 1; i <= k; i++)
  {
    for (auto x : mp)
    {
      int c = x.second / k;
      for (int l = 1; l <= c; l++)
        cout << x.first;
    }
  }

  return 0;

}