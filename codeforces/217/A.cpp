 #include <bits/stdc++.h>
using namespace std;
int x[101],y[101];
int n;
bool vis[101]{0};
void dfs(int a)
{
    vis[a]=true;
    for(int i=1;i<=n;i++)
    {
      if((x[i]==x[a] || y[i]==y[a]) && vis[i]==false) 
      {
           dfs(i);
      }
    }

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  
  cin>>n;
  int ans=-1;
  for(int i=1;i<=n;i++)
    cin>>x[i]>>y[i];
  for(int i=1;i<=n;i++)
  {
    if(vis[i]==false)
    {
      dfs(i);
      ans++;
    }
  }
  cout<<ans;
  

  return 0;
}