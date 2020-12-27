 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    int h;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    bool vis[n]{0};
    for(int i=0;i<k;i++)
      cin>>h,vis[h-1]=true;
    
    for(int i=0;i<n;i++)
    {
      for(int j=n-2;j>=0;j--)
      if(vis[j]==true)
      {
        if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
      }
    
    }
      
    int i;
    for(i=0;i<=n-2;i++)
    {
      
      if(arr[i]>arr[i+1])
      {
        break;
      }
    }
    if(i==n-1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
   
  }
  
  
  return 0;
}

