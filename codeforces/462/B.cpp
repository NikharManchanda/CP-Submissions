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

  long long int n, k;
  cin >> n >> k;
  string str;
  cin >> str;
  map<char, long long int> mp;
  for (long long int i = 0; i < str.length(); i++)
    mp[str[i]]++;
  vector<long long int> v;
  for (auto x : mp)
  {
    v.push_back(x.second);

  }
  long long int s = 0;
  sort(v.rbegin(), v.rend());
  for (long long int i = 0; i < v.size(); i++)
  {
    if (v[i]  > k)
    {
      s = s + k * k;
      k = 0;
      break;
    }
    else
    {
      s += v[i] * v[i];
      k = k - v[i];
    }

  }
  cout << s;

  return 0;
}