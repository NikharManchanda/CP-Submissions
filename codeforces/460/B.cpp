#include <bits/stdc++.h>
using namespace std;
long long int s(long long int n)
{
  long long int t = n;
  long long int sum = 0;
  while (t > 0)
  {
    sum += t % 10;
    t = t / 10;
  }
  return sum;
}
long long pow(long long a, long long b) {
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a;
    a = a * a;
    b >>= 1;
  }
  return res;
}
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
  long long int a, b, c;
  cin >> a >> b >> c;
  vector<int> v;
  for (long long int i = 1; i <= 81; i++)
  {
    long long int h = b * pow(i, a) + c;
    if (h < 1000000000 && h > 0 && s(h) == i)
      v.push_back(h);
  }
  cout << v.size() << endl;
  for (auto x : v)
  {
    cout << x << " ";
  }




  return 0;

}
