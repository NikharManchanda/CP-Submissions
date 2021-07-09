#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define nl                "\n"
#define pb                push_back
#define mp                make_pair
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()
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
#define rev               greater<int>()
#define Max(x,y,z)        max(x,max(y,z))
#define Min(x,y,z)        min(x,min(y,z))
#define imin              INT_MIN
#define imax              INT_MAX
#define Yes               cout<<"Yes\n"
#define No                cout<<"No\n"
#define YES               cout<<"YES\n"
#define NO                cout<<"NO\n"
#define yes               cout<<"yes\n"
#define no                cout<<"no\n"
#define show(A) for (auto i: A) cout << i << " "; cout << '\n';
#define endl "\n"

using ld = long double;
using vi = vector < int > ;
using mi = map < int, int > ;
using pi = pair < int, int > ;

const double Pi = acos(-1.0);
const int inf = 1e18 + 1;
const int M = 1e9 + 7;
const int MM = 998244353;

const int N = 1e5 + 5;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
/*--------------------------------------------------------------------------------------------------*/
void setIO(string s)
{
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
/*--------------------------------------------------------------------------------------------------*/

int n;
int a[N];
map<pair<int,int> ,int> m; 
vector<int> adj[N];
int ok[N];
int d[N];
int vis[N];
int cmin=inf;
vector<int> v;
void dfs(int x, int par)
{
	vis[x]=1;
    d[x]=d[par]+m[{x,par}];
    int curr=cmin;
    //for(auto u:v)
    //{
		if(a[x]<d[x]-cmin)//d[u])
		{
			ok[x]=-1;
	//		break;
		}
	//}
	if(ok[x]==-1)
	return ;
	ok[x]=1;
	cmin=min(cmin,d[x]);
	//v.pb(x);
	for(auto u : adj[x])
	{
		if(!vis[u])
		{
			dfs(u,x);
		}
	}
//	v.pop_back();
	cmin=curr;
			
}


signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
  // setIO("swap");
  cin>>n;
  for(int i=1;i<=n;i++)
  {
	  cin>>a[i];
  }
  for(int i=2;i<=n;i++)
  {
	  int x,y;
	  cin>>x>>y;
	  adj[x].pb(i);
	  adj[i].pb(x);
	  m[{x,i}]=y;
	  m[{i,x}]=y;
  }
  dfs(1,0);
  int c=0;
  for(int i=1;i<=n;i++)
  {
	  if(ok[i]==1)
	  c++;
  }
	cout<<n-c<<nl;
  
  
  
  
  

  return 0;

}

