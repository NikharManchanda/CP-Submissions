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
 
  int n,m;
  cin>>n>>m;
  if(m==0)
  {
  	cout<<"YES";
  	return 0;
  }
  int arr[m];
  for(int i=0;i<m;i++)
  	cin>>arr[i];
  sort(arr,arr+m);
  if(arr[0]==1 || arr[m-1]==n)
  {
  	cout<<"NO";
  }
  else
  {
  	int c=1;
  	int i;
  	for(i=1;i<m;i++)
  	{
  		if(arr[i]==arr[i-1]+1)
  		{
  			c++;
  			if(c==3)
  			{
  				cout<<"NO";
  				break;
  			}
  		}
  		else
  			c=1;
  	}
  	if(i==m)
  		cout<<"YES";
  }


 return 0;
}