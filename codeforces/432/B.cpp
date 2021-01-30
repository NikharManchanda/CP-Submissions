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
 
  int n;
  cin>>n;
  int h[n],o[n],ch[n],co[n];
  for(int i=0;i<n;i++)
  {
  	cin>>h[i]>>o[i];
  }
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
  	mp[h[i]]++;
  }
  for(int i=0;i<n;i++)
  {
  	  ch[i]=n-1;
  	  ch[i]+=mp[o[i]];
  	  co[i]=2*(n-1) - ch[i];
  }
  for(int i=0;i<n;i++)
  {
  	cout<<ch[i]<<" "<<co[i]<<endl;
  }
  

 return 0;
}