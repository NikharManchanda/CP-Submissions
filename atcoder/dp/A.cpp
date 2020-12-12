#include <bits/stdc++.h>
using namespace std;
int dp[100001];
int mincost(int a[],int idx,int n){
  
  if(dp[idx]!=-1){
    return dp[idx];
  }

  if(idx==0){
    return dp[idx] = 0;
  }
  else if(idx==1){
    return dp[idx] = mincost(a,idx-1,n) + abs(a[idx-1]-a[idx]);
  }
  else{
    return dp[idx]= min(mincost(a,idx-1,n) + abs(a[idx]-a[idx-1]), mincost(a,idx-2,n) + abs(a[idx]-a[idx-2]));
  }

}

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
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    cout<<mincost(arr,n-1,n)<<endl;

 return 0;
}