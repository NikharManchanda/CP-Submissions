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
long long int n;
cin>>n;
long long int arr[n];
long long int sum=0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	sum+=arr[i]*(i+1) - i;
}
cout<<sum;

	


 return 0;
}