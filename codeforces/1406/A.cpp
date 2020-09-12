#include<bits/stdc++.h> 
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
   #ifndef ONLINE_JUDGE
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
   #endif
   
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
    sort(arr,arr+n);
    int i;
    if(arr[0]!=0)
        {cout<<"0"<<endl;
        continue;}
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]!= arr[i] && arr[i+1]!=arr[i]+1)
        {
            break;
        }
    }
    unordered_map<int,int> mp;
    for(int j=0;j<=i;j++)
    {
        mp[arr[j]]++;
    }
    int count=0;
    int min=0;
    int max=arr[i],k;
    for( k=min;k<=max;k++)
    {
        if(mp[k]>=2)
            count+=2;
        else
           break;
    }
    if(k!=max+1)
    count+=max-k+1;
    cout<<count<<endl;
   }


return 0;

}