#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<string> vec;
  vec.push_back("0");
  vec.push_back("0 1 0");
  vec.push_back("0 1 2 1 0");
  vec.push_back("0 1 2 3 2 1 0");
  vec.push_back("0 1 2 3 4 3 2 1 0");
  vec.push_back("0 1 2 3 4 5 4 3 2 1 0");
  vec.push_back("0 1 2 3 4 5 6 5 4 3 2 1 0");
  vec.push_back("0 1 2 3 4 5 6 7 6 5 4 3 2 1 0");
  vec.push_back("0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0");
  vec.push_back("0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0");
  int t = 0;
  int j = 2 * n;
  int flag = 0, p = 0;
  for (int i = 1; i <= 2 * n + 1; i++)
  {
    for (int k = 1; k <= j; k++)
      cout << " ";

    if (j == 0)
      p = 1;
    if (p == 0)j = j - 2;
    else
      j = j + 2;

    cout << vec[t] << endl;
    if (t == n)
      flag = 1;
    if (flag == 0)
      t++;
    else
      t--;

  }

  return 0;

}