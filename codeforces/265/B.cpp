#include <bits/stdc++.h>
using namespace std;
#define M 1000000007 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
   long long int n;
   cin>>n;
   long long int count=0;
   long long int arr[n];
   for(int i=0;i<n;i++)
   	cin>>arr[i];
   long long int h=0;
   for(int i=0;i<n-1;i++)
   {
       
       int l=arr[i+1];
       if(l>=arr[i])
       { 
       	  
       	  count=count+arr[i]-h+2;
       	  h=arr[i];
       }
       else
       {
            count=count+arr[i]+arr[i]-arr[i+1]+2-h;
            h=arr[i+1];
       }

   }
   count+=arr[n-1]+1-h;
   cout<<count;

  



 return 0;
}