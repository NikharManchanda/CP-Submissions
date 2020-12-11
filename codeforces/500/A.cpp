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
    
   int n,k;
   cin>>n>>k;

   int arr[n];
   arr[0]=0;
   for(int i=1;i<n;i++)
    cin>>arr[i];
  for(int i=1;i<=n;)     
    {
        if(i>k){
          cout<<"NO";
          return 0;
        }
        if(k==i){
          cout<<"YES";
          return 0;
        }
        if(i!=n)
        i=i+arr[i];
        else
          break;
    }


  
 return 0;
}