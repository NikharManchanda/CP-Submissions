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
  sort(arr, arr + n);
  if (arr[0] != 1)
  {
    cout << 1;
    return 0;
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i + 1] - arr[i] > 1)
    {
      cout << arr[i] + 1;
      return 0;
    }
  }
  cout << arr[n - 1] + 1;



  return 0;

}