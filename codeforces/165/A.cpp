#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     
    int t;
    cin>>t;
    int n=t;
    vector<pair<int,int> > v;
    while(t--)
    {
      int x,y;
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
      int a=0,b=0,c=0,d=0;
      for(int j=0;j<n;j++)
      {
        if(v[i].first==v[j].first && v[i].second>v[j].second)
          a++;
        else if(v[i].first==v[j].first && v[i].second<v[j].second)
          b++;
        else if(v[i].first>v[j].first && v[i].second==v[j].second)
          c++;
        else if(v[i].first<v[j].first && v[i].second==v[j].second)
          d++;
      }
      if(a>=1 && b>=1 && c>=1 && d>=1)
        ans++;
    }
    cout<<ans;

 return 0;
}