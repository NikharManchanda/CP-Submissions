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
 
   int n,l;
   cin>>n>>l;
   int arr[n];
   for(int i=0;i<n;i++)
      cin>>arr[i];
  double d;
  sort(arr,arr+n);
  double diff=INT_MIN;
  for(int i=0;i<n-1;i++)
  {
  	    if(diff<arr[i+1]-arr[i])
        diff=arr[i+1]-arr[i];
  }
  diff=diff/2;
  int a=arr[0]-0;
  int b=l-arr[n-1];
  double c=max(a,b);
  if(c>diff)
  	cout << fixed << setprecision(10)<<c;
  else
  	cout << fixed << setprecision(10)<<diff;


 return 0;
}