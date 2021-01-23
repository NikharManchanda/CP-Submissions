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
bool comp(ii a, ii b)
{
  if (a.first == b.first)
    return a.second < b.second;
  else
    return a.first > b.first;

}

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

  int n, k;
  cin >> n >> k;
  vii v;
  for (int i = 1; i <= n; i++)
  {
    int a, b;
    cin >> a >> b;
    v.pb(mp(a, b));
  }
  sort(v.begin(), v.end(), comp);
  int a = v[k - 1].first, b = v[k - 1].second;
  int c = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].first == a && v[i].second == b)
      c++;
  }
  cout << c;

  return 0;

}