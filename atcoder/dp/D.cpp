#include <bits/stdc++.h>
using namespace std;
long long int dp[101][100001];
long long int knap(long long int wt[],long long int v[], long long int w, long long int n){
  
  if(dp[n][w]!=0){
    return dp[n][w];
  }
  if(w==0 || n==0){
    return 0;
  }
  if(wt[n-1]>w){
       return dp[n][w]=knap(wt,v,w,n-1);
  }
  else{
    return dp[n][w]=max(knap(wt,v,w,n-1) , knap(wt,v,w-wt[n-1],n-1)+v[n-1]);
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
    
    long long int n,w;
    cin>>n>>w;
    long long int wt[n],v[n];
    for(long long int i=0;i<n;i++){
      cin>>wt[i]>>v[i];
    }

    cout<<knap(wt,v,w,n);

 return 0;
}