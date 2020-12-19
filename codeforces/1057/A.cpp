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
   int arr[n+1];
   arr[0]=0;
   arr[1]=1;
   for(int i=2;i<=n;i++)
   {
   	cin>>arr[i];
   }
   vector<int> v;
   int k=n;
   v.push_back(k);
   while(k!=1)
   {
      k=arr[k];
      v.push_back(k);
   }
   reverse(v.begin(),v.end());
   for(auto x: v)
   	cout<< x<< " ";

 return 0;
}