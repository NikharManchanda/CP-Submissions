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
      int o=0,e=0,c=0;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
        if(arr[i]%2==0)
          e++;
        else o++;
      }
      sort(arr,arr+n);
      
      for(int i=1;i<n;i++)
      {
        if(arr[i]-arr[i-1]==1)
        c++; 
      }
      if(o%2==0 && e%2==0)
      {
        cout<<"YES"<<endl;
        
      }
      else
      {
        if(c>=1)
        {
          cout<<"YES"<<endl;
        }
        else
          cout<<"NO"<<endl;
      }

    }

 return 0;
}