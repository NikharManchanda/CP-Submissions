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
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int i, h=arr[0];
    for(i=1;i<n;i++)
    {
      if(h!=arr[i])
        break;
    }

      if(i==n)
      {
        cout<<"NO"<<endl;
        continue;
      }
    else
    {
      cout<<"YES"<<endl;
    }
    int idx,root=arr[0];
    for(i=1;i<n;i++)
    {
      if(arr[i]!=root)
      {
        cout<<1<<" "<<i+1<<endl;
        idx=i+1;
      }
    }
    for(int i=1;i<n;i++)
    {
      if(arr[i]==root)
      {
        cout<<idx<<" "<<i+1<<endl;
      }
    }


  }
  

  return 0;
}