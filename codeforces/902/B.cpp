 #include <bits/stdc++.h>
using namespace std;
int ans=1;
bool visited[10001];
int parent[10001];
vector<int> adj[10001];
int color[10001];
void dfs(int n)
{

  visited[n]=true;
  if(n!=1)
  {
     if(color[n]!=color[parent[n]])
     {
       ans++;
     }
  }
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

  int n;
  cin>>n;
  
  parent[0]=-1,parent[1]=-1;
  for(int i=2;i<=n;i++)
  {
    cin>>parent[i];
    adj[parent[i]].push_back(i);
  }
  for(int i=1;i<=n;i++)
  {
    cin>>color[i];
  }
  dfs(1);
  cout<<ans;
  
  return 0;
}

