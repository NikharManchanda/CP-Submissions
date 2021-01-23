#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

/* -----------------------     CODE BELOW    ------------------------------------*/

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

  int sum;
  cin >> sum;

  int a[10];
  int cmin = INT_MAX, idx;
  for (int i = 1; i <= 9; i++)
  {
    cin >> a[i];
    if (a[i] < cmin)
    {
      cmin = a[i];
      idx = i;
    }
    else if (a[i] == cmin)
    {
      idx = i;
    }
  }
  if (sum < cmin)
  {
    cout << -1;
    return 0;
  }
  deque<int> v;
  if (sum % cmin == 0)
  {
    for (int i = 1; i <= sum / cmin; i++)
    {
      v.pb(idx);
    }
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i];
    }
  }
  else
  {
    for (int i = 1; i <= sum / cmin; i++)
    {
      v.pb(idx);
    }
    int x = sum % cmin;
    int t = sum / cmin;
    for (int i = 1; i <= t; i++)
    {
      int g = a[v.front()];
      x = x + a[v.front()];
      v.pop_front();
      for (int j = 9; j >= 1; j--)
      {
        if (x >= a[j])
        {
          cout << j;
          x = x - a[j];
          break;
        }
      }
    }
  }




  return 0;

}