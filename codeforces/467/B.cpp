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
 
   int n,m,k;
   cin>>n>>m>>k;
   int count=0;
   int c[m]{0};
   int arr[m+1];
   for(int i=0;i<m+1;i++)
   { 
     cin>>arr[i];    
   }
   for(int i=0;i<m;i++)
   {
      for(int j=1;j<=32;j++)
      {
           bool a= arr[i]&(1<<(j-1));
           bool b= arr[m]&(1<<(j-1));
           if(a!=b)
           	c[i]++;

           
      }
       if(c[i]<=k)
       	count++;


   }
  cout<<count;

   

 return 0;
}