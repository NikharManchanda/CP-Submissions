#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long int power(int a,int b)
{
    if(b==0)
        return 1;
    long long int k=power(a,b/2);
    if(b%2==0)
        return ((k%M)*(k%M))%M;
    else
        return ((k%M)*(k%M)*(a%M))%M;
}
long long int fact(long long int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return ((n%M)*(fact(n-1)%M))%M;

}
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
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
int d=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            int a,b,c;
            a=min(min(arr[i],arr[j]),arr[k]);
            b=max(max(arr[i],arr[j]),arr[k]);
            c=arr[i]+arr[j]+arr[k]-a-b;
            if(a+c>b && a!=b && a!=c && b!=c )
              { 
               d++;
           }
        }
    }
  }
  cout<<d;

 return 0;
}






