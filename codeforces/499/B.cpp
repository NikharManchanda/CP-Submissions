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
  map<string,string> mp;
  while(m--)
  {
  	string s,str;
  	cin>>s>>str;
  	mp[s]=str;
  }
  while(n--)
  {
  	 string s,s1;
  	 cin>>s;
  	 s1=mp[s];
  	 if(s.length()<=s1.length())
  	 	cout<<s<<" ";
  	 else 
  	 	cout<<s1<<" ";
  }


 return 0;
}