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
    bool taken[n+1]{false},took[n+1]{false};
    vector<int> arr[n+1];
    for(int i=1;i<=n;i++)
    {
      int q;
      cin>>q;
      for(int j=1;j<=q;j++)
      {
        int k;
        cin>>k;
        arr[i].push_back(k);
        
      }
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=arr[i].size();j++)
      {
        
        if(taken[arr[i][j-1]]==false)
        {
          taken[arr[i][j-1]]=true;
          took[i]=true;
          break;
        }
        
      }
      
    }
    
    
    int k,i;
    for(i=1;i<=n;i++)
    {
      if(taken[i]==false)
      {
        k=i;
        break;
        
      }
      
    }
    
    if(i==n+1)
      {
        cout<<"OPTIMAL"<<endl;
        continue;
      }
    
    for(i=1;i<=n;i++)
    { 
      /*
      int j;
      for(j=1;j<=arr[i].size();j++)
      {
        if(taken[arr[i][j-1]]==false)
        {
          break;
        }
      }
      if(arr[i].size()==0 || j==arr[i].size()+1)
        */
      if(took[i]==false)
      {
        cout<<"IMPROVE"<<endl;
        cout<<i<<" "<<k<<endl;
        break;
      }

    }
    if(i==n+1)
    cout<<"OPTIMAL"<<endl;
    



  }

  return 0;
}