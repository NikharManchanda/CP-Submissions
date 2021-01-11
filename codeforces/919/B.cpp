#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
  int sum = 0;
  while (n != 0)
  {
    sum = sum + n % 10;
    n = n / 10;
  }
  return sum;
}
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

  int n;
  cin >> n;
  int i = 0, j = 0;
  while (1)
  {
    if (getSum(j) == 10)
    {
      i++;
    }

    if (i == n)
    {
      break;
    }
    j++;
  }
  cout << j;



  return 0;
}