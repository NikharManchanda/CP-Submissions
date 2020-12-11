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

 int t;
 cin>>t;
 while(t--)
 {
 	int n,m,x,y;
 	cin>>n>>m>>x>>y;
 	int cost=0;
 	vector<string> v;
 	for(int i=0;i<n;i++)
 	{
 		string str;
 		cin>>str;
 		v.push_back(str);
 	}
 	vector<int> v1;
 	for(int i=0;i<n;i++)
 	{
 		int c=0,flag=0;
 		for(int j=0;j<m;j++)
 		{
            if(v[i][j]=='.')
            {
            	c++;
                flag=0;
            }
            else if(v[i][j]=='*' && flag==0 )
            {
            	v1.push_back(c);
            	c=0;
            	flag=1;
            }
 		}
 		v1.push_back(c);
 	}


 	for(int i=0;i<v1.size();i++)
 	{
 		
 		if(2*x > y)
 		{
 			cost+=(v1[i]/2)*y + (v1[i]%2)*x;
 		}
 		else
 			cost+=v1[i]*x;

 	}
 	cout<<cost<<endl;
 	

 }
 


 return 0;
}