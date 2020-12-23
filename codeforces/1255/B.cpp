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
    int n,m;
    cin>>n>>m;
    int arr[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
      cin>>arr[i],sum+=arr[i];
    if(m<n)
      cout<<-1<<endl;
    else
    {
      if(n==2)
      {
        cout<<-1<<endl;
        continue;
      }
      cout<<2*sum<<endl;
      
      for(int i=1;i<=n;i++)
      {
          cout<<i<<" ";
          if(i+1>n)
            cout<<1<<endl;
          else cout<<i+1<<endl;
      }
    }
   }

 return 0;
}