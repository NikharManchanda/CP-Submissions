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
 
int n,d;
cin>>n>>d;
string str;
cin>>str;
int c=0;
int i=1;
int j=i+d;
while(j>i)
{
    if(j>=n)
    {
    	c++;
    	cout<<c;
    	return 0;
    }
    if(str[j-1]=='0')
    	j--;
    else
    {
    	c++;
    	i=j;
    	j=i+d;
    }


}
if(j==n)
cout<<c;
else
cout<<-1;


  
 return 0;
}