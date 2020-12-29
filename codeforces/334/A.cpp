#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  long long int sum = (n * n);
  sum = sum * (sum + 1);
  sum = sum / 2;
  long long int each = sum / n;
  int c = 0;
  for (int i = 1; i <= (n * n) / 2; i++)
  { c++;
    cout << i << " " <<  n*n  - i + 1 << " ";
    if (c == n / 2)
      c = 0, cout << endl;
  }

  return 0;
}