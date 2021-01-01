#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a = 0, b = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 100)
      a++;
    else
      b++;
  }
  if (a % 2 != 0)
  {cout << "NO"; return 0;}
  else
  {
    int k = b % 2;
    if (k == 0)
    {
      ;
    }
    else
    {
      if (a >= 2)
      {
        cout << "YES";
        return 0;
      }
      else
      {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";



  return 0;

}
