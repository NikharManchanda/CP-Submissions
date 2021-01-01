#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  cin >> str;
  if (str.length() == 1)
  {
    cout << 0;
    return 0;
  }
  int sum = 0, c = 0;
  for (int i = 1; i <= 4; i++)
  {
    sum = 0;
    for (int j = 0; j < str.length(); j++)
      sum += str[j] - '0';
    c++;

    if (sum <= 9)
    {
      cout << c;
      return 0;
    }
    str.clear();
    str = to_string(sum);

  }



  return 0;

}