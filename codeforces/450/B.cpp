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
  long long int x, y;
  cin >> x >> y;
  long long int n;
  cin >> n;
  long long int m = 1000000007;

  if (n % 6 == 1)
  {

    long long int t = x ;
    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;

  }
  else if (n % 6 == 2)
  {
    long long int t = y ;
    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;

  }
  else if (n % 6 == 3)
  {
    long long int t = (y - x) ;
    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;

  }
  else if (n % 6 == 4)
  {
    long long int t = (x) * (-1) ;

    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;

  }
  else if (n % 6 == 5)
  {
    long long int t = (y) * (-1) ;
    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;
  }
  else
  {
    long long int t = (x - y) ;

    if (t >= 0)
      cout << t % m;
    else
      cout << (m + t % m) % m;



  }





  return 0;

}