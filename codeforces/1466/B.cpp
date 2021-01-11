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
    cin >> n;
    int a[n];
    map<int, bool> mp;
    set<int> s;
    for (int i = 0; i < n; i++)
    {  cin >> a[i]; s.insert(a[i]);}
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (mp[a[i]] == false)
      {ans++; mp[a[i]] = true;}
      else if (mp[a[i] + 1] == false)
      {
        ans++;
        mp[a[i] + 1] = true;
      }

    }
    cout << ans << endl;
  }



  return 0;
}