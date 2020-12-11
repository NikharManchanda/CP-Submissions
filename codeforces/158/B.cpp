#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    int ans=0;
    ans+=mp[4];
    ans+=mp[3];
    mp[1]=mp[1]-mp[3];
    ans+=(mp[2]/2);
    if(mp[2]%2!=0)
    {
      ans+=1;
      if(mp[1]>0)
      {
        mp[1]-=2;
      }
    }
    if(mp[1]>0){
      ans+=(mp[1]/4);
      if(mp[1]%4!=0){
        ans+=1;
      }
    }
    cout<<ans;
  

  
 return 0;
}