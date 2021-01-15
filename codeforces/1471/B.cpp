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
  long long int t;
  cin >> t;
  while (t--)
  {
    long long int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    long long int idx = -1;
    long long int cmin = INT_MAX;
    long long int s = 0;
    long long int a[n];
    for (long long int i = 0;  i < n; i++)
    {
      long long int d = v[i];
      long long int e = 0;
      while (d % x == 0)
      {
        e++;
        d = d / x;
      }
      a[i] = e;
      if (cmin > e)
      {
        idx = i;
        cmin = e;
      }
      s += v[i];
    }

    for (long long int i = 0; i < n; i++)
    {
      if (i < idx)
        s += v[i] * (cmin + 1);
      else
        s += v[i] * (cmin);
    }
    cout << s << endl;
  }


  return 0;

}