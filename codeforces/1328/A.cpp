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
 
    int t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      if(a%b==0)
        cout<<0<<endl;
      else
      cout<<b-a%b<<endl;
    }
  

  
 return 0;
}