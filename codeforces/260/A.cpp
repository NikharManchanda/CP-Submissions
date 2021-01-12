#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /*
   #ifndef ONLINE_JUDGE

      freopen("Ip-A.txt","r",stdin);
      freopen("Op-A.txt","w",stdout);

   #endif
  */

  int a, b, n;
  cin >> a >> b >> n;
  int i;
  for (i = 0; i <= 9; i++)
  {
    int s = a;
    s = 10 * s + i;
    if (s % b == 0)
    {
      cout << s;
      break;
    }
  }
  if (i == 10)
  {
    cout << -1;
    return 0;
  }
  for (int i = 1; i <= n - 1; i++)
    cout << 0;



  return 0;
}