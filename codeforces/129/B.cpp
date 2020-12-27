 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n>>m;
  map<int,int> mp;
  vector<int> adj[n+1];
  for(int i=1;i<=m;i++)
  {
    int a,b;
    cin>>a>>b;
    mp[a]++;
    mp[b]++;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int ans=0;
  while(1)
  { 
    vector<int> v;
    for(auto x: mp)
   {
     if(x.second==1)
     {
       v.push_back(x.first);
     }
   }
   if(v.size()==0)
   {
     cout<<ans<<endl;
     return 0;
   }
   else
   {
     ans++;
     for(auto x: v)
     {
        mp[x]--;
        for(auto y : adj[x] )
        {
          mp[y]--;
        }
     }
   }
  }
  
  
  return 0;
}

