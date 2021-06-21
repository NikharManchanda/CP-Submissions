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

void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

vector<int> adj[27];
bool vis[27], con[27], cs[27];
bool val = true;
vector<char> ans;
void dfs(int n)
{
  if (cs[n] == 1)
  {
    val = false;
    return ;
  }
  cs[n] = 1;
  for (auto u : adj[n])
  {
    if (!vis[u])
    {
      dfs(u);
    }
  }
  char x = 'a' + n - 1;
  ans.pb(x);
  cs[n] = 0;
  vis[n] = 1;
}
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // setIO("swap");

  int n;
  cin >> n;
  vector<string> v;
  for (int i = 0; i < n; i++)
  {
    string f;
    cin >> f;
    v.pb(f);
  }

  bool ok = true;
  for (int i = 1; i < n; i++)
  {
    string a, b;
    a = v[i - 1], b = v[i];
    int idx = 0;
    while (a[idx] == b[idx] && idx < sz(a) && idx < sz(b))
    {
      idx++;
    }
    if (idx == a.size() && a.size() <= b.size())
    {
      continue;
    }
    else if (a.size() > b.size() && idx == b.size())
    {
      ok = false;
      break;
    }
    else
    {
      int x, y;
      x = a[idx] - 'a';
      y = b[idx] - 'a';
      x++;
      y++;
      adj[x].pb(y);
      con[x] = 1;
      con[y] = 1;
    }
  }
  vector<char> left;
  for (int i = 1; i <= 26; i++)
  {

    if (val == false)
    {
      break;
    }
    if (adj[i].size() == 0 && con[i] == 0)
    {
      left.pb(char('a' + i - 1));
      continue;
    }
    if (!vis[i])
      dfs(i);
  }
  reverse(all(ans));
  if (ok == true && val == true)
  {
    // reverse(all(ans));
    for (auto x : ans)
    {
      cout << x;
    }
    for (auto x : left)
    {
      cout << x;
    }
  }
  else
  {
    cout << "Impossible" << nl;
  }

  return 0;

}
