#include <bits/stdc++.h>
using namespace std;
#define M 10000007 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      #ifndef ONLINE_JUDGE
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
   #endif
 

   int n;
   cin>>n;
   long long int y=pow(4,n-3);
   cout<<(9*n -3)*y;

   

  
return 0;
}

 