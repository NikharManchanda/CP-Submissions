#include <bits/stdc++.h>
using namespace std;
#define M_PI       3.14159265358979323846
double area(int r)
{
	return  M_PI*r*r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
sort(arr,arr+n,greater<int>());
double ans=0;
for(int i=0;i<n;i+=2)
{
	if(i+1<n)
	ans=ans+area(arr[i])-area(arr[i+1]);
    else
    ans=ans+area(arr[i]);
}
cout<<fixed<<setprecision(10)<<ans;



 return 0;
}