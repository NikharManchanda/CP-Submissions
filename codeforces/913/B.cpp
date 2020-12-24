 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  map<int,int> mp;
  vector<int> adj[n+1];
  for(int j=2;j<=n;j++)
  {
    int h;
    cin>>h;
    mp[h]++;
    adj[h].push_back(j);
  }
  for(int i=1;i<=n;i++)
  {
    int c=0;
       if(adj[i].size()!=0)
       {
         for(int j=0;j<adj[i].size();j++)
          if(mp[adj[i][j]]==0)
          {
             c++;
          }

          if(c<3)
          {
            cout<<"No";
            return 0;
          }
       }
  }
  cout<<"Yes";
  

  

  return 0;
}