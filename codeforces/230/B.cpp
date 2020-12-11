#include <bits/stdc++.h>
using namespace std;
bool isprime(long long int n)
{
      // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (long long int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true;  

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
  while(n--)
  {
  	long long int m;
  	cin>>m;
  	long long int t=sqrt(m);
  	if(t*t==m)
  	{
           if(isprime(t))
           	cout<<"YES"<<endl;
           else 
           	cout<<"NO"<<endl;
  	}
  	else
  		cout<<"NO"<<endl;
  }


 return 0;
}