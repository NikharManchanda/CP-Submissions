#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  /*
  #ifndef ONLINE_JUDGE

    freopen("IP-A.txt", "r", stdin);
    freopen("OP-A.txt", "w", stdout);

  #endif
  */
  int L, B, l, b;
  cin >> L >> B >> l >> b;
  if (b * L <= B * l)
  {
    int x = B * l - L * b;
    int y = l * B;
    int z = __gcd(x, y);
    x = x / z;
    y = y / z;
    cout << x << "/" << y;
  }
  else
  {
    int x = b * L - l * B;
    int y = L * b;
    int z = __gcd(x, y);
    x = x / z;
    y = y / z;
    cout << x << "/" << y;

  }






  return 0;

}
