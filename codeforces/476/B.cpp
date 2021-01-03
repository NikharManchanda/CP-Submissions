#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
  if (n <= 1)
    return 1;
  else return fact(n - 1) * n;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str, s;
  cin >> str >> s;
  int p = 0, q = 0, m = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '+')
      p++;
    else
      m++;
  }
  int a = 0, b = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '+')
      a++;
    else if (s[i] == '-')
      b++;
    else
      q++;
  }
  if (p - a < 0 || m - b < 0)
  {
    cout << fixed << setprecision(12) << double(0);
  }
  else
  {
    p = p - a;
    m = m - b;

    double ans = 0;
    double d = fact(q);

    double k = fact(p) ;

    k = k * fact(m);

    double e = pow(2, q);

    ans = d / (k);
    ans = ans / e;
    cout << fixed << setprecision(12) << ans;



  }


  return 0;

}
