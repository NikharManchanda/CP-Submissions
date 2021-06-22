#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define nl                "\n"
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).end(),(x).begin()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define fix(prec)         {cout << setprecision(prec) << fixed;}
#define lcm(a, b)         ((a) * (b)) / __gcd(a, b)
#define rev                  greater<int>()
const double pi = acos(-1.0);
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 1e5 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n;
  cin >> n;
  int k;
  cin >> k;
  int a[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
  }
  int l = 0;
  int r = n - 1;
  int cs = mp.size();
  if (cs >= k)
  {
    while (l <= r && cs > k)
    {
      while (mp[a[l]] != 1 && l <= r)
      {
        mp[a[l]]--;
        l++;
      }
      while (mp[a[r]] != 1 && l <= r)
      {

        mp[a[r]]--;
        r--;
      }
      if (cs > k && l < r)
      {
        cs--;
        mp[a[l]] = 0;
        l++;

      }
      if (cs > k && l < r && mp[a[r]] == 1)
      {
        cs--;
        mp[a[r]] = 0;
        r--;

      }

    }
    if (cs == k)
    {
      while (mp[a[l]] > 1 && l <= r)
      {
        mp[a[l]]--;
        l++;
      }
      while (mp[a[r]] > 1 && l <= r)
      {

        mp[a[r]]--;
        r--;
      }
    }
    cout << l + 1 << " " << r + 1;
  }
  else
  {
    cout << "-1 -1";
  }









  return 0;

}
