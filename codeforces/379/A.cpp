#include <bits/stdc++.h>
using namespace std;

int fun( int a, int b ){
  if(a<b){
    return 0;
  }
  int ans=0;
    int n=logb(a);
    int left = 0;
    
    while( a>0 ){
      ans+=(a/b);
      left+=a%b;\
      a=a/b; 
    }
    return fun(left,b)+ans;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
    int a,b;
    cin>>a>>b;
    int ans=a+fun(a,b);
    
    cout<<ans;
  
 return 0;
}