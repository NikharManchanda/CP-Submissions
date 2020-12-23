 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]==1)
        ans++;
    }
    int cmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
     
      for(int j=i;j<n;j++)
      {
         int c=ans;
        for(int k=i;k<=j;k++)
        {
          if(arr[k]==0)
            c++;
          else
            c--;
        }
        cmax=max(cmax,c);
      }
      
    }
    cout<<cmax<<endl;

 return 0;
}