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
 
   long long int n;
   cin>>n;
   long long int t;
   cin>>t;
   long long int arr[t];
   for(long long int i=0;i<t;i++)
   {
       
       
       
       
       
       
       
       
       
       
       
       
   	cin>>arr[i];
   }
   long long int i=0;
   long long int sum=0;
   for(i=0;i<t;i++)
   {
   	  if(i==0)
   	  sum+=(arr[i]-1);
   	  else if(arr[i]<arr[i-1])
   		{
   	 		sum+=(n-arr[i-1]);
   	    	sum+=(arr[i]);
   		}
   	  else if(arr[i]>=arr[i-1])
   	  	sum+=(arr[i]-arr[i-1]);
   	 
   }

   
   cout<<sum<<endl;

   

 return 0;
}