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
  int cmin = INT_MAX, idx = 0;
  for (int i = 0; i < n; i++)
  {

    if (cmin > arr[i])
    {
      cmin = arr[i];
      idx = i + 1;
    }
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == cmin)
      c++;
  }
  if (c > 1)
    cout << "Still Rozdil";
  else
    cout << idx;



  return 0;

}