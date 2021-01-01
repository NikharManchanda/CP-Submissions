#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == i)
      c++;
  }
  if (c == n)
  {
    cout << c;
    return 0;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if (arr[i] != i)
      {
        if (i == arr[arr[i]])
        { c += 1;
          break;
        }
      }
    }
    c += 1;
    cout << c;
  }


  return 0;

}