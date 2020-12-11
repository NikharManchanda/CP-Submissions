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
 
  long long int n,m;
  cin>>n>>m;
  long long int k=n/m;
  long long int h=n%m;
  long long int cmin;
  long long int g=(k+1)*k;
  g=g/2;
  g=g*h;
  cmin=g;
  long long int j=k*(k-1);
  j=j/2;
  j=j*(m-h);
  cmin+=j;
  long long int cmax=((n-m+1)*(n-m))/2;
   cout<<cmin<<" "<<cmax;

 return 0;
}