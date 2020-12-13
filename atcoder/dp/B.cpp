#include <bits/stdc++.h>
using namespace std;
int dp[100001];
int mincost(int a[],int idx,int n,int k){
  
  if(dp[idx]!=-1){
    return dp[idx];
  }

  if(idx==0){
    return dp[idx] = 0;
  }
  else{
    int cmin=INT_MAX;
    for(int i=idx-1;i>=0 && i>=idx-k ;i--){
       cmin=min(cmin,mincost(a,i,n,k) + abs(a[idx]-a[i]) );
    }
    return dp[idx]=cmin;
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
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    cout<<mincost(arr,n-1,n,k)<<endl;

 return 0;
}