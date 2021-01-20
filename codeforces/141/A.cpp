#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
long long mod = 1000000007;

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

  string s, s1, s2;
  cin >> s >> s1 >> s2;
  map<char, int> mp, mp1;
  for (int i = 0; i < s.length(); i++)
  {
    mp[s[i]]++;
  }
  for (int i = 0; i < s1.length(); i++)
  {
    mp[s1[i]]++;
  }
  for (int i = 0; i < s2.length(); i++)
  {
    mp1[s2[i]]++;
  }
  if (mp.size() != mp1.size())
  {
    cout << "NO";
    return 0;
  }
  else
  {
    for (auto x : mp)
    {
      if (mp1[x.first] != x.second)
      {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";


  return 0;

}