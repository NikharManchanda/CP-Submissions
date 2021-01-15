#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  /*
  #ifndef ONLINE_JUDGE

    freopen("Ip-A.txt", "r", stdin);
    freopen("Op-A.txt", "w", stdout);

  #endif
  */
  long long int n, m;
  cin >> n >> m;

  long long int p[6] {0};
  long long int s[6] {0};
  long long int h = n;
  long long int j = m;
  for (long long int i = 2; i <= 5; i++)
  {

    if (i == 4)
      continue;


    while (h % i == 0)
    {
      p[i]++;
      h = h / i;
    }
    while (j % i == 0)
    {
      s[i]++;
      j = j / i;
    }

  }



  if (h != j)
  {
    cout << -1;
  }
  else
    cout << abs(p[2] - s[2]) + abs( p[3] - s[3] ) + abs(p[5] - s[5]) ;


  return 0;

}