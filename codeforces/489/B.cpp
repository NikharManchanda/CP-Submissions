 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cin>>m;
  int b[m];
  for(int i=0;i<m;i++)
    cin>>b[i];
  int idx=0;
  sort(a,a+n);
  sort(b,b+m);
  int ans=0;
  for(int i=0;i<n;i++)
  {
    int x,y,z;
    x=a[i]-1;
    y=a[i];
    z=a[i]+1;
    if(binary_search(b+idx,b+m,x))
    {
      auto it=lower_bound(b+idx,b+m,x)-b;
      
      idx=it+1;
      ans++;
      continue;
    }
    else if(binary_search(b+idx,b+m,y))
    {
      auto it=lower_bound(b+idx,b+m,y)-b;
      
      idx=it+1;
      ans++;
      continue;
    }
    else if(binary_search(b+idx,b+m,z))
    {
      auto it=lower_bound(b+idx,b+m,z)-b;
           idx=it+1;
      ans++;
      continue;
    }
  }
  
    cout<<ans<<" ";

  return 0;
}