#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  cin >> str;
  for (int i = 0; i < str.length();)
  {
    if (str[i] != '1')
    {
      cout << "NO";
      return 0;
    }
    else
    {
      if (i + 2 < str.length())
      {
        if (str[i + 1] == '4' && str[i + 2] == '4')
          i += 3;
        else if (str[i + 1] == '4')
          i += 2;
        else
          i++;
      }
      else if (i + 1 < str.length())
      {
        if (str[i + 1] == '4')
          i += 2;
        else
          i++;
      }
      else if (i < str.length())
        i++;

    }

  }
  cout << "YES";



  return 0;

}