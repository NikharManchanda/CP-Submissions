#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n;
  cin >> n;
  long long int arr[n];
  for (long long int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  long long int cmin = arr[0];
  long long int cmax = arr[n - 1];
  cout << cmax - cmin << " ";
  long long a = upper_bound(arr, arr + n, cmin) - arr;
  long long  b = n - (lower_bound(arr, arr + n, cmax) - arr);
  if (cmax == cmin)
  {
    cout << ((n) * (n - 1)) / 2;
  }
  else
    cout << a*b;


  return 0;

}
