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
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
     for(int i=0;i<n;i++)
    	cin>>b[i];
    if(a[0]==0)
    {
    	cout<<"NO";
    	return 0;
    }
    if(b[k-1]==0 && a[k-1]==0)
    {
    	cout<<"NO";
    	return 0;
    }
    if(a[k-1]==1)
    {
           cout<<"YES";
    }    	
    else
    {
    	for(int i=k;i<n;i++)
    	{
    		if(a[i]==1 && b[i]==1)
    		{
    			cout<<"YES";
    			return 0;
    		}
    	}
    	cout<<"NO";
    }
   

 return 0;
}