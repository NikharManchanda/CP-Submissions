 #include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define mp make_pair 
#define pb push_back 


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n>>m;
  int k;
  cin>>k;
  bool fine[n+1]{0};
  vector<pair<int,int> > adj[n+1];
  for(int i=1;i<=m;i++)
  {
    int a,b,c;
    cin>>a>>b>>c;
    adj[a].pb(mp(b,c));
    adj[b].pb(mp(a,c));
  }
  for(int i=1;i<=k;i++)
  {
    int a;
    cin>>a;
    fine[a]=true;
  }

  if(k==0)
  {
    cout<<-1;
    return 0;
  }
  else
  {
    int ans=INT_MAX;
    for(int i=1;i<=n;i++)
    {
       if(fine[i]==false)
       {
        int cmin=INT_MAX;
       for(auto x: adj[i])
       {  
          if(fine[x.first]==true)
          cmin=min(cmin,x.second);
       }
       ans=min(ans,cmin);
       }
       
    }
    if(ans!=INT_MAX)
     cout<<ans;
    else
    cout<<-1;
  }

  
  
  return 0;
}

