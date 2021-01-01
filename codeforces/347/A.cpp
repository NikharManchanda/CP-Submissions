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
  {
    cin >> arr[i];
  }
  sort(arr, arr + n, greater<int> ());
  vector<int> v;
  for (int i = 1; i < n - 1; i++)
    v.push_back(arr[i]);
  cout << arr[0] << " ";
  sort(v.begin(), v.end());
  for (auto x : v)
    cout << x << " ";
  cout << arr[n - 1];



  return 0;

}
