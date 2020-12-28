 #include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define mp make_pair 
#define pb push_back 


vector<ll > adj[100001];
bool visited[100001];
ll  c[100001];
ll  cmin=INT_MAX;
void dfs(ll  n)
{
   cmin=min(cmin,c[n]);
   visited[n]=true;
   for(auto x: adj[n])
   {
      if(!visited[x])
      {
       dfs(x);
      }
   }
   
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll  n,q;
  cin>>n>>q;
  
  for(ll  i=1;i<=n;i++)
    cin>>c[i];
  for(ll  i=1;i<=q;i++)
  {
    ll  a,b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  ll ans=0;
  for(ll i=1;i<=n;i++)
  {
    if(!visited[i])
      cmin=INT_MAX,dfs(i),ans+=cmin;
  }
  cout<<ans<<endl;
  
  
  return 0;
}

