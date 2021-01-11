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

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n ;
    int a[n];


    for (int i = 0; i < n; i++)
      cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
      cin >> b[i];

    long long int sum = 0, s = 0;

    for (int i = 0; i < n; i++)
    { long long int d = 0;
      for (int j = 0; j <= i; j++)
      {
        d = d + a[j];
      }
      sum = max(sum, d);
    }
    for (int i = 0; i < m; i++)
    { long long int d = 0;
      for (int j = 0; j <= i; j++)
      {
        d = d + b[j];
      }
      s = max(s, d);
    }
    cout << sum + s << endl;

  }



  return 0;
}