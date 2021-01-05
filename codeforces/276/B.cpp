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
  string str;
  cin >> str;
  map<char, int> mp;
  for (int i = 0; i < str.length(); i++)
  {
    mp[str[i]]++;
  }
  int c = 0;
  for (auto x : mp)
  {
    if (x.second % 2 != 0)
    {
      c++;
    }
  }
  if (c == 0)
  {
    cout << "First";
  }
  else
  {
    if (c % 2 == 0)
      cout << "Second";
    else
      cout << "First";
  }



  return 0;

}
